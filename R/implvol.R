#' Option implied volatility
#'
#' The implvol package computes option implied volatilities using Peter
#' Jaeckel's implementation of "Let's Be Rational".
#'
#' @docType package
#' @references \url{http://www.jaeckel.org/}
#' @seealso \code{\link[implvol]{implvol}}
#' @importFrom Rcpp sourceCpp
#' @useDynLib implvol
"_PACKAGE"

#' Peter Jaeckel's implementation of "Let's Be Rational"
#'
#' Implies Black's volatility from option price with as little as two
#' iterations to maximum attainable precision on standard (64 bit floating
#' point) hardware for all possible inputs.
#'
#' @references \url{http://www.jaeckel.org/}
#' @references \url{https://jaeckel.000webhostapp.com/LetsBeRational.pdf}
#' @references \url{https://jaeckel.000webhostapp.com/LetsBeRational.7z}
#'
#' @param price Price of option
#' @param forward Forward of spot price of underlying
#' @param strike Strike
#' @param time Time to expiry in years
#' @param call Call option if TRUE; put option if FALSE
#' @return Implied volatility
#' @export
implvol <- function(price, forward, strike, time, call)
{
  jaeckel(price, forward, strike, time, call)
}
