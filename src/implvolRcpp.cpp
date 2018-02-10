/*
Copyright (C) 2018 Chris Hein <https://github.com/cmhein>

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

#include "implvol.h"

using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::DataFrame implvol(int n,
                        double x0,
                        double y0,
                        double a,
                        double b,
                        double c,
                        double d)
{
  if (n < 1)
  {
    // return empty dataframe
  }

  NumericVector x(n);
  NumericVector y(n);

  if (0 != implvol(n, x0, y0, a, b, c, d, &x[0], &y[0]))
  {
    // return empty dataframe
  }

  return DataFrame::create(_["x"]= x, _["y"]= y);
}
