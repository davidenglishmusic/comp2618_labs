#include "Shape.h"

class Circle : public Shape
{
public:
  Circle(double = 1);

  void setRadius(double);
  double getRadius()const;

  virtual double Area()const override;
  
private:
  double mRadius;
};
