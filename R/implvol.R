#' implvol: option implied volatility
#' 
#' implvol computes option implied volatilities using Peter Jaeckel's
#' implementation of "Let's Be Rational".
#' 
#' @author Chris Hein <cmhein00@gmail.com>
#' @importFrom Rcpp sourceCpp
#' @useDynLib implvol
#' @docType package
#' @name implvol
NULL 

#' @export
implvol <- function(price, forward, strike, time, call)
{
  jaeckel(price, forward, strike, time, call)
}
