AM_CFLAGS=-g -Wall -O3

include_HEADERS = upper.h

lib_LTLIBRARIES = libupper.la
libupper_la_SOURCES = upper.c

bin_PROGRAMS = upper_string
upper_string_SOURCES = upper_string.c
upper_string_LDADD = libupper.la
