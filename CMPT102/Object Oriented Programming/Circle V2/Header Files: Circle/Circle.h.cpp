#include <iostream>
#include <cmath>
using namespace std;

class Circle{
  private:
    double radius;
  public:
    double getArea() const;
    double getRadius() const;
    void setRadius(double r);
    Circle();
};
