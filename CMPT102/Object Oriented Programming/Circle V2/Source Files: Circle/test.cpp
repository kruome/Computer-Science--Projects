#include "Circle.h"

int main(){
    
    Circle c1, c3, c2(10);
    Circle *c4 = new Circle;
    int n;
    
    cout<<"Circle 1: "<<endl;
    //c1.setRadius(10); // Radius will be set to 1 as a default 
    cout<<"Radius: "<<c1.getRadius()<<endl;
    cout<<"Area: "<<c1.getArea()<<endl;
    cout<<endl;
    
    cout<<"Circle 2: "<<endl;
    cout<<"Radius: "<<c2.getRadius()<<endl;
    cout<<"Area: "<<c2.getArea()<<endl;
    cout<<endl;

    cout<<"Enter the radius of the third circle: ";
    cin>> n;
    cout<<endl;

    cout<<"Circle 3: "<<endl;
    c3.setRadius(n);
    cout<<"Radius: "<<c3.getRadius()<<endl;
    cout<<"Area: "<<c3.getArea()<<endl;
    cout<<endl;

    cout<<"Circle 4: "<<endl;
    c4-> setRadius(5);
     cout<<"Radius: "<<c4->getRadius()<<endl;
    cout<<"Area: "<<c4->getArea()<<endl;
    
    delete[] c4; // or delete c4
    return 0;
}
