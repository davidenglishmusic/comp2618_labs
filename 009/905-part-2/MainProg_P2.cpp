#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex A;
	cout << "The default object is: ";
	A.display();

	Complex B(-2.45, 1.0);
	cout << "\n\nThe non-default object is: ";
	B.display();

	Complex C(25.777,-35.668);
	cout << "\n\nThe second non-default object is: ";
	C.display();

	cout << "\n\n- Test overloaded += operator";
	A = Complex(-25.44,-3.543);
	B = Complex(30.3,-34.876);

	C = A += B;

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	cout << "\n\n- Test overloaded -= operator";
	A = Complex(4.65,3.789);
	B = Complex(6.78,9.222);

	C = A -= B;

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	cout << "\n\n- Test overloaded + operator";
	A = Complex(-25.44,-3.543);
	B = Complex(30.3,-34.876);

	C = A + B;

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	cout << "\n\n- Test overloaded - operator";
	A = Complex(4.65,3.789);
	B = Complex(6.78,9.222);

	C = A - B;

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();
	cout << "\nC = ";
	C.display();

	cout << "\n\n- Test overloaded == and != operators";
	A = Complex(4.65,3.789);
	B = Complex(6.78,9.222);

	if (A == B)
		cout << "\nA is equal to B" << '\n';
	else
		cout << "\nA is not equal to B" << '\n';

	if (A != B)
		cout << "A is not equal to B" << '\n';
	else
		cout << "A is equal to B" << '\n';

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();

	A = Complex(4.65,3.789);
	B = Complex(4.65,3.789);

	if (A == B)
		cout << "\n\nA is equal to B" << '\n';
	else
		cout << "\n\nA is not equal to B" << '\n';

	if (A != B)
		cout << "A is not equal to B" << '\n';
	else
		cout << "A is equal to B" << '\n';

	cout << "\nA = ";
	A.display();
	cout << "\nB = ";
	B.display();

	cout << '\n' << endl;

	return 0;

}
