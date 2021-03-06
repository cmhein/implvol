% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/implvol.R
\name{implvol}
\alias{implvol}
\title{Peter Jaeckel's implementation of "Let's Be Rational"}
\usage{
implvol(price, forward, strike, time, call)
}
\arguments{
\item{price}{Price of option}

\item{forward}{Forward of spot price of underlying}

\item{strike}{Strike}

\item{time}{Time to expiry in years}

\item{call}{Call option if TRUE; put option if FALSE}
}
\value{
Implied volatility
}
\description{
Implies Black's volatility from option price with as little as two
iterations to maximum attainable precision on standard (64 bit floating
point) hardware for all possible inputs.
}
\references{
\url{http://www.jaeckel.org/}

\url{https://jaeckel.000webhostapp.com/LetsBeRational.pdf}

\url{https://jaeckel.000webhostapp.com/LetsBeRational.7z}
}
