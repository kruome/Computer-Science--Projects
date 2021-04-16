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

    Rectangle shape[3];
    
    for (int i = 0; i < 3; i++){
        cout<<"Height: " << shape[i].getHeight() << endl;
        cout<<"Width: "<<shape[i].getWidth()<<endl;
        cout<<"Area: " <<shape[i].getArea()<<endl;
        cout<<"Perimeter: "<<shape[i].getPerimeter()<<endl;
        cout<<endl;
    }
    
    Rectangle arshape[3] = {Rectangle(5,10), Rectangle(6,12), Rectangle(10,20)};
    
    for (int i = 0; i < 3; i++){
        cout<<"Height: " << arshape[i].getHeight() << endl;
        cout<<"Width: "<<arshape[i].getWidth()<<endl;
        cout<<"Area: " <<arshape[i].getArea()<<endl;
        cout<<"Perimeter: "<<arshape[i].getPerimeter()<<endl;
        cout<<endl;
    }
  
    delete[] r2;
    return 0;
}
