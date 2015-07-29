#! /bin/bash

version=1.0
package_name=upper
package_dist_dir=autodemo

if [ -e $package_dist_dir ]; then rm -r $package_dist_dir; fi
mkdir -p $package_dist_dir
cp Makefile.am upper.c upper.h upper_string.c $package_dist_dir
cd $package_dist_dir
autoscan
sed -e 's/FULL-PACKAGE-NAME/'$package_name'/' -e 's/VERSION/'$version'/' -e 's|BUG-REPORT-ADDRESS|/dev/null|' \
    -e '10iAM_INIT_AUTOMAKE' \
    -e '10iLT_INIT' \
    < configure.scan > configure.ac
touch NEWS README AUTHORS ChangeLog
autoreconf -iv
./configure
make distcheck
