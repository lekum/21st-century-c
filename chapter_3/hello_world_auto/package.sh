#! /bin/bash

version=1.0
package_name=hello

if [ -e autodemo ]; then rm -r autodemo; fi
mkdir -p autodemo
cp Makefile.am hello.c autodemo
cd autodemo
autoscan
echo "Autoscanned"
sed -e 's/FULL-PACKAGE-NAME/'$package_name'/' -e 's/VERSION/'$version'/' -e 's|BUG-REPORT-ADDRESS|/dev/null|' -e '10iAM_INIT_AUTOMAKE' < configure.scan > configure.ac
echo "configured"
touch NEWS README AUTHORS ChangeLog
autoreconf -iv
./configure
make distcheck
