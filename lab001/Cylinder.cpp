#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder(const double &radius, const double &height)
: Circle(radius)
{
  Shape::setNoOfSides(3);
  setHeight(height);
}

void Cylinder::setHeight(const double &height)
{
  if(height > 0)
  {
    this->mHeight = height;
  }
}

double Cylinder::getHeight() const
{
  return this->mHeight;
}

double Cylinder::Area()const
{
  return ( 2 * M_PI * Circle::getRadius() * Circle::getRadius()) + ( 2 * M_PI * Circle::getRadius() * getHeight());
}

double Cylinder::Volume()const
{
  return M_PI * Circle::getRadius() * Circle::getRadius() * getHeight();
}
