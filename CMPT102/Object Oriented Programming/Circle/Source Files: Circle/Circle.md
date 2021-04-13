```cpp
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
```
<h2>Different methods for function: Void Circle</h2>

------------------------------------------------------

```cpp
void Circle::setRadius(double radius){
    if(radius>0){
        Circle::radius = radius;    
    }
    
}
```
------------------------------------------------------
```cpp
void Circle::setRadius(double radius){
    if(radius>0){
        this-> radius = radius;    
    }
    
}
```
------------------------------------------------------
```cpp
double Circle::getArea() const{
    return M_PI * pow(radius,2);
}
double Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(double radius){
    if(radius>0){
        this-> radius = radius;    
    }
    
}
```
