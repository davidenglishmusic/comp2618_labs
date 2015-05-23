// Exercise 2 Start: Complex.h
// Declaration of class Complex.
// Member functions are defined in Complex.cpp.
// Author: Bob Langelaan
// Date: Jan 30th, 2014
// Modified: David English
// Date: Apr 30th, 2015

/*

Please note that you normally need to provide a prototype for any global functions used to overload an operator.

This prototype statement is normally appended to the end of the class interface file (the class .h file), but it
must _NOT_ be in the actual class declaration (with the exception of friend statements - see explanation further
on in this paragraph). Why not put the prototype statement in the actual class declaration you ask? Because if it
was, the function would be interpreted as a member function of the class instead of as a global function.

This is what I have done below for the overloaded "+" , "-" and "!=" operators that are
implemented as non-friend global functions. Note that the exception to this rule is when the class offers
friendship to the global function (as with the overloaded << and >> operators). In this case the friend statements
also serve the purpose of providing a prototype statement to the compiler. But I consider it good programming style
to also provide prototypes below the class declaration for these friend functions, even though the compiler
does not require them.

*/

#ifndef Complex_incl
#define Complex_incl
#include <iostream>

class Complex  // Complex class
{
public:
	Complex (double real = 1.0, double imag = 0.0 );  // ctor with
	   // 2 default arguments

	Complex & operator+= (const Complex & RHS ) ; //Adds RHS to the Complex object invoked with this method
	                                      //  (thereby modifying the Complex object) and returns the result
	                                      //  Overloads the "+=" operator
	Complex & operator-= (const Complex & RHS ) ; //Subtracts RHS from the Complex object invoked with this method
	                                      //  (thereby modifying the Complex object) and returns the result
	                                      //  Overloads the "-=" operator

	bool operator == (const Complex & RHS) const; // Overloads "==" operator

	double getReal(void) const;      // Returns real part
	double getImaginary(void) const; // Returns imaginary part

	void setReal(const double &);
	void setReal(std::istream &);
	void setImaginary(const double &);
	void setImaginary(std::istream &);

	void display(void); // Outputs to standard output stream the Complex object
	                    //   in the format: (real_part,imaginary_part)

private:

	double real_part, // represents real part of the Complex object
		imaginary_part;     // represents imaginary part of the Complex object

};

//  The following are global function prototypes and not member functions of the Complex class.
//  They are included here because these functions are closely associated with the Complex class.
//  Their implementation is also in the same .cpp file as the implementation of the Complex
//     class.  This is not required but is the norm in these situations.

// overloads the binary "+" operator through a global function
Complex operator + (const Complex & LHS, const Complex & RHS );

// overloads the binary "-" operator through a global function
Complex operator - (const Complex & LHS, const Complex & RHS );

// overloads the binary "!=" operator through a global function
bool operator != (const Complex & LHS, const Complex & RHS);

std::ostream &operator<<(std::ostream &, const Complex &);
std::istream &operator>>(std::istream &, Complex &);

#endif
