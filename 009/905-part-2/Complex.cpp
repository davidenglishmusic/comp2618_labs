#include <iostream>
#include <iomanip>
#include "Complex.h"
using namespace std;

Complex::Complex(const double &figureA, const double &figureB)
{
  setFigureA(figureA);
  setFigureB(figureB);
}

void Complex::display() const
{
  cout << fixed << setprecision(3);
  cout << "(" << getFigureA() << ", " << getFigureB() << ")";
}

void Complex::setFigureA(const double &figureA)
{
  this->figureA = figureA;
}

double Complex::getFigureA() const
{
  return this->figureA;
}

void Complex::setFigureB(const double &figureB)
{
  this->figureB = figureB;
}

double Complex::getFigureB() const
{
  return this->figureB;
}

Complex Complex::operator +=(const Complex &otherComplex)
{
  this->setFigureA(this->getFigureA() + otherComplex.getFigureA());
  this->setFigureB(this->getFigureB() + otherComplex.getFigureB());
  return *this;
}
Complex Complex::operator +(const Complex &otherComplex) const
{
  return Complex((this->getFigureA() + otherComplex.getFigureA()),
  this->getFigureB() + otherComplex.getFigureB());
}

Complex Complex::operator -=(const Complex &otherComplex)
{
  this->setFigureA(this->getFigureA() - otherComplex.getFigureA());
  this->setFigureB(this->getFigureB() - otherComplex.getFigureB());
  return *this;
}

Complex Complex::operator -(const Complex &otherComplex) const
{
  return Complex((this->getFigureA() - otherComplex.getFigureA()),
  this->getFigureB() - otherComplex.getFigureB());
}

bool Complex::operator ==(const Complex &otherComplex) const
{
  if(this->getFigureA() == otherComplex.getFigureA() &&
    this->getFigureB() == otherComplex.getFigureB()){
      return true;
  }
  else{
    return false;
  }
}

bool Complex::operator !=(const Complex &otherComplex) const
{
  if(this->getFigureA() != otherComplex.getFigureA() ||
    this->getFigureB() != otherComplex.getFigureB()){
      return true;
  }
  else{
    return false;
  }
}
