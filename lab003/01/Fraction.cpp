// Exercise 1 Starting Point: Fraction.cpp
// Member-function definitions for class Fraction.
// Author: Bob Langelaan 
// Date: Jan 30th, 2014
// Modified by: David English
// Date: Apr 29th, 2015

#include "Fraction.h"
#include "GCD.h" // template function for calculating greatest common divisor

#include <iostream>
using namespace std;

Fraction::Fraction (void)
:numerator(0),denominator(1)
{
}


Fraction::Fraction ( long long num, long long denom )
:numerator(num),denominator(denom)
{
	simplify();
}

Fraction & Fraction::plusEq (const Fraction & op )
{
	if (denominator != op.denominator )
	{
		long long common_divisor = gcd(denominator,op.denominator);
		numerator *= (op.denominator / common_divisor);
		numerator += op.numerator * (denominator / common_divisor);
		denominator *= (op.denominator / common_divisor);
	}
	else 
	{
		numerator += op.numerator;
	}

	simplify();

	return (*this);
}

Fraction & Fraction::operator+=(const Fraction & op)
{
	if (denominator != op.denominator)
	{
		long long common_divisor = gcd(denominator, op.denominator);
		numerator *= (op.denominator / common_divisor);
		numerator += op.numerator * (denominator / common_divisor);
		denominator *= (op.denominator / common_divisor);
	}
	else
	{
		numerator += op.numerator;
	}

	simplify();

	return (*this);
}

Fraction & Fraction::minusEq (const Fraction & op )
{
	if (denominator != op.denominator )
	{
		long long common_divisor = gcd(denominator,op.denominator);
		numerator *= (op.denominator / common_divisor);
		numerator -= op.numerator * ( denominator / common_divisor);
		denominator *= (op.denominator / common_divisor);
	}
	else
	{
		numerator -= op.numerator;
	}

	simplify();

	return (*this);
}

Fraction & Fraction::operator -= (const Fraction & op)
{
	if (denominator != op.denominator)
	{
		long long common_divisor = gcd(denominator, op.denominator);
		numerator *= (op.denominator / common_divisor);
		numerator -= op.numerator * (denominator / common_divisor);
		denominator *= (op.denominator / common_divisor);
	}
	else
	{
		numerator -= op.numerator;
	}

	simplify();

	return (*this);
}

//Implementation of the timesEq method
//Performs similar operation as the *= operator on the built-in types
Fraction & Fraction::timesEq (const Fraction & op)
{
	numerator *= op.numerator;
	denominator *= op.denominator;

	simplify();  // will make sure that denominator is positive and
	             //   will invoke gcd() function to reduce fraction
	             //   as much as possible

	return (*this); // returns the object which invoked the method
}

Fraction & Fraction::operator *= (const Fraction & op)
{
	numerator *= op.numerator;
	denominator *= op.denominator;

	simplify();  // will make sure that denominator is positive and
	//   will invoke gcd() function to reduce fraction
	//   as much as possible

	return (*this); // returns the object which invoked the method
}

Fraction & Fraction::divideEq (const Fraction & op )
{
	numerator *= op.denominator;
	denominator *= op.numerator;

	simplify();

	return (*this);
}

Fraction & Fraction::operator /= (const Fraction & op)
{
	numerator *= op.denominator;
	denominator *= op.numerator;

	simplify();

	return (*this);
}

Fraction Fraction::negate ( void ) const
{
	return (Fraction(-(numerator), (denominator)));
}

Fraction Fraction::operator-(void)const
{
	return (Fraction(-(numerator), (denominator)));
}

void Fraction::simplify(void)
{
	if (denominator < 0 ) //correct sign if necessay
	{
		numerator = - numerator;
		denominator = - denominator;
	}

	if (numerator == 0 )
	{
		denominator = 1;
	}

	// Reduce by dividing by gcd, if gcd > 1

	else
	{
		long long  gcd_val =  gcd (numerator, denominator);
		if (gcd_val > 1)
		{
			numerator /= gcd_val;
			denominator /= gcd_val;
		}
	}
}

long long Fraction::getNum(void)const
{
	return numerator;
}

long long Fraction::getDenom(void)const
{
	return denominator;
}

void Fraction::display (void)const
{
	cout << numerator << '/' << denominator;
}


