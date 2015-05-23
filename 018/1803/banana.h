#include <iostream>
using namespace std;

class Banana
{
	friend ostream& operator<<(ostream &, Banana &);
public:
	Banana(bool = true); // default ctr
	bool isRipe();
	bool operator==(Banana&);
private:
	bool ripe; // is the banana ripe?
};