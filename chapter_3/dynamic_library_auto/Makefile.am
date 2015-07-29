AM_CFLAGS=-g -Wall -O3

include_HEADERS = upper.h

lib_LTLIBRARIES = libupper.la
libupper_la_SOURCES = upper.c

bin_PROGRAMS = upper_line
upper_line_SOURCES = upper_line.c
upper_line_LDADD = libupper.la
