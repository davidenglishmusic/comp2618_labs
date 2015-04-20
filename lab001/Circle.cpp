#include "Circle.h"
#include <cmath>

Circle::Circle(const double &radius)
: Shape()
{
  Shape::setNoOfSides(1);
  setRadius(radius);
}

void Circle::setRadius(const double &radius)
{
  if (radius > 0){
    this->mRadius = radius;
  }
}

double Circle::getRadius()const
{
  return this->mRadius;
}

double Circle::Area()const
{
  return M_PI * getRadius() * getRadius();
}
