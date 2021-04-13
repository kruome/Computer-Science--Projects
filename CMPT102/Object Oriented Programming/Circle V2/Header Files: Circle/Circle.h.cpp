#include <iostream>
using namespace std;

class Circle{
  private:
    double radius;
  public:
    double getArea() const;
    double getRadius() const;
    void SetRadius(double r);
    Circle(); //constructor
};
