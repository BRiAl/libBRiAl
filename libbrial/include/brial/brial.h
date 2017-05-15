// -*- c++ -*-
//*****************************************************************************
/** @file include/brial/brial.h 
 *
 * @author Alexander Dreyer
 * @date 2006-03-06
 *
 * This file includes all header files, which are necessary
 * for using the brial lib.
 *
 * @par Copyright:
 *   (c) 2006 by The PolyBoRi Team
**/
//*****************************************************************************

#ifndef polybori_polybori_h_
#define polybori_polybori_h_

#include "BooleSet.h"
#include "BoolePolyRing.h"
#include "BooleEnv.h"
#include "BoolePolynomial.h"
#include "BooleMonomial.h"
#include "BooleVariable.h"
#include "BooleExponent.h"
#include "ring/WeakRingPtr.h"

#include "except/brialError.h"
#include "except/brialGenericError.h"

#include "iterators/CGenericIter.h"
#include "iterators/CExpIter.h"

#include "routines/brial_algorithms.h"
#include "orderings/brial_order.h"
#include "orderings/brial_order.h"

#include "factories/MonomialFactory.h"
#include "factories/PolynomialFactory.h"
#include "factories/SetFactory.h"
#include "factories/VariableBlock.h"
#include "factories/VariableFactory.h"

#endif // of #ifndef polybori_polybori_h_
