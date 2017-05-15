// -*- c++ -*-
//*****************************************************************************
/** @file pbori_routines.h
 *
 * @author Alexander Dreyer
 * @date 2006-08-23
 *
 * This file includes files, which define function templates for internal use 
 * in the brial library.
 *
 * @par Copyright:
 *   (c) 2006 by The PolyBoRi Team
**/
//*****************************************************************************

#ifndef brial_routines_pbori_routines_h_
#define brial_routines_pbori_routines_h_

// include basic definitions
#include <brial/brial_defs.h>

// include brial algorithms and functionals
#include "brial_algo.h"
#include "brial_func.h"

// Get routines, which add features related to decision diagrams
#include "brial_routines_dd.h"

// Get routines, which add features related to Cudd library
#include "brial_routines_cuddext.h"

// Get additional routines
#include "brial_routines_misc.h"

// Get order-related routines
#include "brial_routines_order.h"

// Get hash-related routines
#include "brial_routines_hash.h"

#endif
