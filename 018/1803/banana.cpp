#include "banana.h"
using namespace std;

Banana::Banana(bool ripe)
{
	this->ripe = ripe;
}

bool Banana::isRipe()
{
	return this->ripe;
}

bool Banana::operator==(Banana& otherBanana){
	if (this->isRipe() == otherBanana.isRipe()){
		return true;
	}
	else{
		return false;
	}
}

ostream& operator<<(ostream &output, Banana &banana){
	output << "A ";
	if (banana.isRipe()){
		output << "ripe ";
	}
	else {
		output << "rotten ";
	}
	output << "banana";
	return output;
}