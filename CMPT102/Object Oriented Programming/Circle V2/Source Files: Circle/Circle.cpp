#include "Circle.h"

double Circle::getArea() const{
    return M_PI * pow(radius,2);
}
double Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(double r){
    radius = r;
}
Circle::Circle(){
    radius = 1;
}
Circle::Circle(double r){
    radius = r;
}
