class Complex
{
public:
  Complex(const double & = 1.0, const double & = 0.0);
  void display() const;

  void setFigureA(const double &);
  double getFigureA() const;

  void setFigureB(const double &);
  double getFigureB() const;

  Complex operator +=(const Complex &);
  Complex operator +(const Complex &) const;
  Complex operator -=(const Complex &);
  Complex operator -(const Complex &) const;
  bool operator ==(const Complex &) const;
  bool operator !=(const Complex &) const;

private:
  double figureA;
  double figureB;
};
