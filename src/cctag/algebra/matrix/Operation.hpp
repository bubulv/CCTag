/*
 * Copyright 2016, Simula Research Laboratory
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#ifndef _CCTAG_NUMERICAL_ALGEBRA_OPERATION_HPP_
#define	_CCTAG_NUMERICAL_ALGEBRA_OPERATION_HPP_

#include <Eigen/Core>
#include <cmath>
#include "../../utils/Exceptions.hpp"

namespace cctag {
namespace numerical {

Eigen::Matrix3f& normalizeDet1( Eigen::Matrix3f& m );

}
}

#endif
