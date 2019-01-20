/*
Copyright (C) 2019 Chris Hein <https://github.com/cmhein>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as published
by the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <Rcpp.h>

#include "lets_be_rational.h"

using namespace Rcpp;

/**
 * Peter Jaeckel's implementation of "Let's Be Rational"
 *
 * Implies Black's volatility from option price with as little as two
 * iterations to maximum attainable precision on standard (64 bit floating
 * point) hardware for all possible inputs.
 *
 * Ref: http://www.jaeckel.org/
 *
 * @param[in] price   Price of option
 * @param[in] forward Forward of spot price of underlying
 * @param[in] strike  Strike
 * @param[in] time    Time to expiry in years
 * @param[in] call    Call option if true; put option if false
 * @return            Implied volatility
 */
// [[Rcpp::export]]
double jaeckel(double price,
               double forward,
               double strike,
               double time,
               bool   call)
{
  return implied_volatility_from_a_transformed_rational_guess(
    price,
    forward,
    strike,
    time,
    (call ? 1.0 : -1.0));
}
