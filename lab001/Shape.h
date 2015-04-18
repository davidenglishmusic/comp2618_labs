class Shape
{
public:
  Shape();
  ~Shape();

  void setNoOfSides(unsigned int);
  unsigned int getNoOfSides()const;

  virtual double Area()const;
  virtual double Volume()const;

  static unsigned int getObjectCount();

private:
  unsigned int mNoOfSides;
  static unsigned int objectCount;

  void incrementObjectCount();
  void decrementObjectCount();
};
