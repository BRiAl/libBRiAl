ACLOCAL_AMFLAGS = -I m4

SUBDIRS = cudd libbrial . groebner

lib_LTLIBRARIES = libbrial.la

libbrial_la_SOURCES =
libbrial_la_LIBADD = \
	cudd/libcudd.la \
	libbrial/src/libbrial_base.la
libbrial_la_LDFLAGS = -no-undefined $(AM_LDFLAGS)

EXTRA_DIST = \
	cudd/LICENSE \
	LICENSE \
	README
# Dummy C++ source to cause C++ linking.
nodist_EXTRA_libbrial_la_SOURCES = dummy.cc
