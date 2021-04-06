```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Circle{

private:
    double radius; // member variable
public:
    double getArea() const;// member function
    double getRadius() const;
    void setRadius(double);
    
};

int main(){
    
    Circle c1, c2;
    
    c1.radius = 10;
    cout<<"Radius: "<<c1.radius<<endl;
    cout<<"Area: "<<c1.getArea()<<endl;
    
    cout<<"Enter the radius of the second circle: ";
    cin>> c2.radius;
    
    cout<<"Radius: "<<c2.radius<<endl;
    cout<<"Area: "<<c2.getArea()<<endl;
    return 0;
}
double Circle::getArea() const{
    return M_PI * pow(radius,2);
}
double Circle::getRadius() const{
    return 0.0;
}
void Circle::setRadius(double){
    
}
```
