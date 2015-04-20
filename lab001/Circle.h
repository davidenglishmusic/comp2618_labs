#include "Shape.h"

class Circle : public Shape
{
public:
  Circle(const double & = 1);

  void setRadius(const double &);
  double getRadius()const;

  virtual double Area()const override;

private:
  double mRadius;
};
