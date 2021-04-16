#include <iostream>
using namespace std;
class Rectangle{
    private:
    double width, height;
    public:
    double getWidth();
    void setWidth(double);
    double getHeight();
    void setHeight(double);
    double getArea();
    double getPerimeter();
    Rectangle();
    Rectangle(double, double);
    ~Rectangle();
};
