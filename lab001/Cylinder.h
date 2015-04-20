#include "Circle.h"

class Cylinder : public Circle
{
public:
  Cylinder(const double & = 1, const double & = 1);

  void setHeight(const double &);
  double getHeight()const;

  virtual double Area()const override;
  virtual double Volume()const override;

private:
  double mHeight;
};
