#include <Circle.h>
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
