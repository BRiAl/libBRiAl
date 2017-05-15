// -*- c++ -*-
//*****************************************************************************
/** @file CCheckedIdx.cc
 *
 * @author Alexander Dreyer
 * @date 2011-02-31
 *
 * 
 *
 * @par Copyright:
 *   (c) by The PolyBoRi Team
 *
**/
//*****************************************************************************

// include basic definitions
#include <brial/brial_defs.h>
#include <brial/common/CCheckedIdx.h>
#include <brial/except/brialGenericError.h>

BEGIN_NAMESPACE_PBORI

/** @class CCheckedIdx
 * @brief This class defines CCheckedIdx.
 *
 **/
void CCheckedIdx::handle_error() const {
  throw PBoRiGenericError<CTypes::out_of_bounds>();
}

END_NAMESPACE_PBORI

