include $(top_srcdir)/common.mk

TESTS = unittests

unittests_SOURCES = BlockDegLexOrderTest.cc \
	BlockDegRevLexAscOrderTest.cc \
	BooleConstantTest.cc \
	BooleEnvTest.cc \
	BooleExponentTest.cc \
	BooleMonomialTest.cc \
	BoolePolynomialTest.cc \
	BoolePolyRingTest.cc \
	BooleSetTest.cc \
	BooleVariableTest.cc \
	CCuddDDFacadeTest.cc \
	CFactoryBaseTest.cc \
	CStringLiteralTest.cc \
	DegLexOrderTest.cc \
	DegRevLexAscOrderTest.cc \
	FGLMStrategyTest.cc \
	GroebnerStrategyTest.cc \
	LexOrderTest.cc \
	MonomialFactoryTest.cc \
	PBoRiErrorTest.cc \
	PolynomialFactoryTest.cc \
	PseudoLongProductTest.cc \
	SetFactoryTest.cc \
	spolyTest.cc \
	term_accumulateTest.cc \
	unittests.cc \
	unittests_orderings.cc \
	VariableFactoryTest.cc \
	weak_pointersTest.cc

AM_LDFLAGS = $(BOOST_UNIT_TEST_FRAMEWORK_LIB)
LIBS = $(top_builddir)/groebner/src/libbrial_groebner.la $(top_builddir)/libbrial.la

check_PROGRAMS = $(TESTS)
