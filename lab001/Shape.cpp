#include "Shape.h"

unsigned int Shape::objectCount = 0;

Shape::Shape()
{
  setNoOfSides(0);
  incrementObjectCount();
}

Shape::~Shape()
{
  decrementObjectCount();
}

void Shape::setNoOfSides(const unsigned int &noOfSides)
{
    if (noOfSides >= 0){
      this->mNoOfSides = noOfSides;
    }
}

unsigned int Shape::getNoOfSides()const
{
  return this->mNoOfSides;
}

double Shape::Area()const
{
  return 0;
}

double Shape::Volume()const
{
  return 0;
}

unsigned int Shape::getObjectCount()
{
  return objectCount;
}

void Shape::incrementObjectCount()
{
  objectCount++;
}

void Shape::decrementObjectCount()
{
  if (objectCount > 0){
    objectCount--;
  }
}
