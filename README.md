# Option Implied Volatility

The implvol package computes option implied volatilities using [Peter Jaeckel](http://www.jaeckel.org/)'s implementation of "Let's Be Rational" ([reference source code](https://jaeckel.000webhostapp.com/LetsBeRational.7z)).

According to Jaeckel's ["Let's Be Rational"](https://jaeckel.000webhostapp.com/LetsBeRational.pdf), the algorithm implies Black's volatility from option price with as little as two iterations to maximum attainable precision on standard (64 bit floating point) hardware for all possible inputs.

Implementation of "Let's Be Rational" is copyrighted Peter Jaeckel.

In particular, see [note](http://www.jaeckel.org/) regarding the reference implementation:
> Permission to use, copy, modify, and distribute this software is freely granted, provided that the contained copyright notice is preserved. WARRANTY DISCLAIMER: The Software is provided "as is" without warranty of any kind, either express or implied, including without limitation any implied warranties of condition, uninterrupted use, merchantability, fitness for a particular purpose, or non-infringement. 

And see the copyright notice in "Let's Be Rational" C++ header files:

> Copyright © 2013-2014 Peter Jäckel.
> 
> Permission to use, copy, modify, and distribute this software is freely granted, provided that this notice is preserved.
>
> WARRANTY DISCLAIMER
> The Software is provided "as is" without warranty of any kind, either express or implied, including without limitation any implied warranties of condition, uninterrupted use, merchantability, fitness for a particular purpose, or non-infringement.
