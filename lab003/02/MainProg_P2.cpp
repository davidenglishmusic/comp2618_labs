// Main Program - used to "test drive" the Complex class
// File Name: MainProg_P2.cpp
// Author: Bob Langelaan
// Date: Date: Jan 30th, 2014
// Modified: David English
// Date: Apr 30th, 2015

#include "Complex.h" // include definition of class Complex from Complex.h
using namespace std;

int main()
{
	// Test constructor -NOTE: your Complex class should have only
	//     one constructor.  Your constructor should have default arguments
	//     for the real and imaginary parts of the complex object.

	Complex A; // create a Complex object using default arguments
	cout << "The default object is: " << A;

	Complex B(-2.45, 1.0); // create a Complex object supplying values to the ctor
	cout << "\n\nThe non-default object is: " << B;

	Complex C(25.777,-35.668); // create another Complex object supplying values to the ctor
	cout << "\n\nThe second non-default object is: " << C;

	// Test overloaded += operator
	cout << "\n\n- Test overloaded += operator";
	A = Complex(-25.44,-3.543);  //Assign new values to Complex objects
	B = Complex(30.3,-34.876);

	C = A += B;

	cout << "\nA = " << A;
	cout << "\nB = " << B;
	cout << "\nC = " << C;

	// Test overloaded -= operator
	cout << "\n\n- Test overloaded -= operator";
	A = Complex(4.65,3.789);  //Assign new values to Complex objects
	B = Complex(6.78,9.222);

	C = A -= B;

	cout << "\nA = " << A;
	cout << "\nB = " << B;
	cout << "\nC = " << C;

	// Test overloaded + operator
	cout << "\n\n- Test overloaded + operator";
	cout << "\nEnter a value for A: ";
	cin >> A;
	cout << "\nEnter a value for B: ";
	cin >> B;

	C = A + B;

	cout << "\nA = " << A << "  <== is this correct?";
	cout << "\nB = " << B << "  <== is this correct?";
	cout << "\nC = " << C << "  <== is this correct?";

	// Test overloaded - operator
	cout << "\n\n- Test overloaded - operator";
	cout << "\nEnter a value for A and B: ";
	cin >> A >> B;

	C = A - B;

	cout << "\nA = " << A << "  <== is this correct?";
	cout << "\nB = " << B << "  <== is this correct?";
	cout << "\nC = " << C << "  <== is this correct?";

	// Test overloaded == and != operators
	cout << "\n\n- Test overloaded == and != operators";
	A = Complex(4.65,3.789);  //Assign new values to Complex objects
	B = Complex(6.78,9.222);

	if (A == B)
		cout << "\nA is equal to B" << '\n';
	else
		cout << "\nA is not equal to B" << '\n';

	if (A != B)
		cout << "A is not equal to B" << '\n';
	else
		cout << "A is equal to B" << '\n';

	cout << "\nA = " << A;
	cout << "\nB = " << B;

	A = Complex(4.65,3.789);  //Assign new values to Complex objects
	B = Complex(4.65,3.789);

	if (A == B)
		cout << "\n\nA is equal to B" << '\n';
	else
		cout << "\n\nA is not equal to B" << '\n';

	if (A != B)
		cout << "A is not equal to B" << '\n';
	else
		cout << "A is equal to B" << '\n';

	cout << "\nA = " << A;
	cout << "\nB = " << B;

	cout << '\n' << endl;

	system("pause");

	return 0;

} // end main
