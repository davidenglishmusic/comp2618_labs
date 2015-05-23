// Exercise 1 Starting Point: Main Program - used to "test drive" the Fraction class
// File Name: MainProg.cpp
// Author: Bob Langelaan
// Date: Jan 30th, 2014
// Modified by: David English
// Date: Apr 29th, 2015

#include <iostream>
#include "Fraction.h" // include definition of class Fraction from Fraction.h
#include "GCD.h"      // include definition of gcd template function
using namespace std;

int main()
{
	Fraction A; // create a Fraction object with default ctor
	cout << "The default object is: ";
	A.display();

	Fraction B(1,1024); // create a Fraction object with the non-default ctor
	cout << "\n\nThe non-default object is: ";
	B.display();

	Fraction C(8,-1024); // test to see if the simplify method is invoked from 
	                                //   the non-default ctor
	cout << "\n\n8/-1024 simplified is: ";
	C.display();

	// Test timesEq()
	cout << "\n\n- Test timesEq()";
	A = Fraction(2,3); //Assign new values to Fraction objects
	B = Fraction(3,5);

	// NOTE: Equivalent to:  C = A *= B;
	C = A *= (B);

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	// Test divideEq()
	cout << "\n\n- Test divideEq()";
	A = Fraction(2,3);  //Assign new values to Fraction objects
	B = Fraction(-7,3);

	// NOTE: Equivalent to:  C = A /= B;
	C = A /= (B);

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	// Test plusEq()
	cout << "\n\n- Test plusEq()";
	A = Fraction(-2,-3);  //Assign new values to Fraction objects
	B = Fraction(8,9);

	// NOTE: Equivalent to:  C = A += B;
	C = A += (B);

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	// Test minusEq()
	cout << "\n\n- Test minusEq()";
	A = Fraction(2,3);  //Assign new values to Fraction objects
	B = Fraction(8,9);

	// NOTE: Equivalent to:  C = A -= B;
	C = A -= (B);

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	// Test negate()
	cout << "\n\n- Test negateEq()";
	A = Fraction(-2,3);  //Assign new values to Fraction objects
	B = Fraction(8,9);

	// NOTE: Equivalent to:  C = -A;
	C = -A;

	cout << "\nA = ";
	A.display();
	cout << "\nC = ";
	C.display();

	// NOTE: Equivalent to:  C = -B;
	C = -B;

	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	cout << '\n' << endl;

	return 0;

} // end main

