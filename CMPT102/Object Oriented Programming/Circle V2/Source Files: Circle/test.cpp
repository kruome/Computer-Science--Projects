#include "Circle.h"

int main(){
    
    Circle c1, c2;
    Circle *c3 = new Circle;
    int n;
    
    c1.setRadius(10);
    cout<<"Radius: "<<c1.getRadius()<<endl;
    cout<<"Area: "<<c1.getArea()<<endl;
    
    cout<<"Enter the radius of the second circle: ";
    cin>> n;
    
    c2.setRadius(n);
    
    cout<<"Radius: "<<c2.getRadius()<<endl;
    cout<<"Area: "<<c2.getArea()<<endl;
    
    c3-> setRadius(1);
     cout<<"Radius: "<<c3->getRadius()<<endl;
    cout<<"Area: "<<c3->getArea()<<endl;
    
    delete[] c3; // or delete c3
    return 0;
}
