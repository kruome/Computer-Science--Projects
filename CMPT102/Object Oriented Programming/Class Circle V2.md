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
    void setRadius(double r);
    
};

int main(){
    
    Circle c1, c2;
    int n;
    
    c1.setRadius(10);
    cout<<"Radius: "<<c1.getRadius()<<endl;
    cout<<"Area: "<<c1.getArea()<<endl;
    
    cout<<"Enter the radius of the second circle: ";
    cin>> n;
    
    c2.setRadius(n);
    
    cout<<"Radius: "<<c2.getRadius()<<endl;
    cout<<"Area: "<<c2.getArea()<<endl;
    return 0;
}
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
------------------------------------------------------
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
    void setRadius(double r);
    
};

int main(){
    
    Circle c1, c2;
    int n;
    
    c1.setRadius(10);
    cout<<"Radius: "<<c1.getRadius()<<endl;
    cout<<"Area: "<<c1.getArea()<<endl;
    
    cout<<"Enter the radius of the second circle: ";
    cin>> n;
    
    c2.setRadius(n);
    
    cout<<"Radius: "<<c2.getRadius()<<endl;
    cout<<"Area: "<<c2.getArea()<<endl;
    return 0;
}
double Circle::getArea() const{
    return M_PI * pow(radius,2);
}
double Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(double radius){
    if(radius>0){
        Circle::radius = radius;    
    }
    
}
```
