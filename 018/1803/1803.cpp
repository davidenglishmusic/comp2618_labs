#include <iostream>
#include <string>
#include "equality.h"
#include "banana.h"
using namespace std;

int main()
{
	int intA = 5;
	int intB = 5;
	int intC = 6;

	cout << boolalpha;

	cout << "intA: " << intA << " is equal to intB: " << intB << "? " << isEqual(intA, intB) << endl;
	cout << "intA: " << intA << " is equal to intC: " << intC << "? " << isEqual(intA, intC) << endl;

	string stringA = "hello";
	string stringB = "hello";
	string stringC = "bonjour";

	cout << "stringA: " << stringA << " is equal to stringB: " << stringB << "? " << isEqual(stringA, stringB) << endl;
	cout << "stringA: " << stringA << " is equal to stringC: " << stringC << "? " << isEqual(stringA, stringC) << endl;

	Banana bananaA;
	Banana bananaB;
	Banana bananaC(false);

	cout << "Two bananas that are ripe are considered the equal" << endl;

	cout << "bananaA: " << bananaA << " is equal to bananaB: " << bananaB << "? " << isEqual(bananaA, bananaB) << endl;
	cout << "bananaA: " << bananaA << " is equal to intC: " << bananaC << "? " << isEqual(bananaA, bananaC) << endl;

	return 0;
}