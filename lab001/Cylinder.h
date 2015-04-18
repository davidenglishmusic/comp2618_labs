#include "Circle.h"

class Cylinder : public Circle
{
public:
  Cylinder(double = 1, double = 1);

  void setHeight(double);
  double getHeight()const;

  virtual double Area()const override;
  virtual double Volume()const override;
  
private:
  double mHeight;
};
