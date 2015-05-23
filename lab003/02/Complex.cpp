// Exercise 2 start: Complex.cpp
// Member-function definitions for class Complex.
// Author: Bob Langelaan
// Date: Jan 30th, 2014
// Modified: David English
// Date: Apr 30th, 2015

#include "Complex.h"
#include <iomanip>
using namespace std;

ostream &operator<<(ostream &output, const Complex &op)
{
	output << "( " << op.getReal() << ", " << op.getImaginary() << " )";
	return output;
}

istream &operator>>(istream &input, Complex &op)
{
	input.ignore(2);
	op.setReal(input);
	input.ignore(2);
	op.setImaginary(input);
	input.ignore(2);
	return input;
}

void Complex::setReal(istream &input)
{
	input >> this->real_part;
}

void Complex::setImaginary(istream &input)
{
	input >> this->imaginary_part;
}

Complex::Complex ( double real, double imag )
{
	this->real_part = real;
	this->imaginary_part = imag;
}

// overload the "+=" operator
Complex & Complex::operator += (const Complex & op )
{
	this->real_part += op.real_part;
	this->imaginary_part += op.imaginary_part;

	return (*this);
}

// overload the "-=" operator
Complex & Complex::operator -= (const Complex & op )
{
	this->real_part -= op.real_part;
	this->imaginary_part -= op.imaginary_part;

	return (*this);
}

// overload the "==" operator
bool Complex::operator == (const Complex & RHS) const
{
	if (this->real_part != RHS.real_part)
		return false;
	else if (this->imaginary_part != RHS.imaginary_part)
		return false;
	else
		return true;
}

void Complex::setReal(const double & real_part)
{
	this->real_part = real_part;
}

void Complex::setImaginary(const double & imaginary_part)
{
	this->imaginary_part = imaginary_part;
}

double Complex::getReal(void) const
{
	return this->real_part;
}

double Complex::getImaginary(void) const
{
	return this->imaginary_part;
}

void Complex::display (void)
{
   // set floating-point number format
   cout << fixed << setprecision(3);

   cout << "( " << this->getReal() << " , " << this->getImaginary() << " )";
}
// overloads the binary '+' operator through a global function
Complex operator + (const Complex & LHS, const Complex & RHS )
{
	Complex temp = LHS;
	temp += RHS; // uses the overloaded "+=" operator
	return temp;
}

// overloads the binary '-' operator through a global function
Complex operator - (const Complex & LHS, const Complex & RHS )
{
	Complex temp = LHS;
	temp -= RHS; // uses the overloaded "-=" operator
	return temp;
}

// overloads the binary "!=" operator through a global function
bool operator != (const Complex & LHS, const Complex & RHS)
{
	return !(LHS == RHS); // uses overloaded "==" operator
}
