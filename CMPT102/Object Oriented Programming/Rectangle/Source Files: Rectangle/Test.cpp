#include "Rectangle.h"

int main(){
    Rectangle r1;
    Rectangle *r2 = new Rectangle;
    int w, h;
    
    r1.setWidth(10);
    r1.setHeight(5);
    cout<<"Rectangle 1:"<<endl;
    cout<<"Width: " <<r1.getWidth()<<endl;
    cout<<"Height: "<<r1.getHeight()<<endl;
    cout<<"Area: "<<r1.getArea()<<endl;
    cout<<"Perimeter: "<<r1.getPerimeter()<<endl;
    
    cout<<"Enter the width: ";
    cin>>w;
    cout<<"Enter the height: ";
    cin>>h;
    
    r2 -> setWidth(w);
    r2 ->setHeight(h);
    
    cout<<"Rectangle 2: "<<endl;
    cout<<"Width: " <<r2->getWidth()<<endl;
    cout<<"Height: "<<r2->getHeight()<<endl;
    cout<<"Area: "<<r2->getArea()<<endl;
    cout<<"Perimeter: "<<r2->getPerimeter()<<endl;

    return 0;
}
