#include <iostream> 
using namespace std; 

class Car{ 
  private: 
    int yearmodel; 
    string make; 
    int speed; 
  public: 
    Car(int, string); 
    int getyearmodel(); 
    void setyearmodel(int yearmodel); 
    string getmake(); 
    void setmake(string make); 
    int getspeed(); 
    void setspeed(int speed); 
    void accelerate(); 
    void brake(); 
}; 

int main(){ 

    Car c1 = {Car(2021,"Lamborghini Aventador")} ; 
    cout<<"Car: "<< c1.getmake()<<endl; 
    cout<<"Model: "<< c1.getyearmodel()<<endl; 
    cout<<"Current speed: "<< c1.getspeed()<<endl; 
    cout<<"Simluation starting for acceleration: "<<endl <<endl; 
    c1.accelerate(); 
    cout<<endl; 
    c1.accelerate(); 
    cout<<endl;
    c1.accelerate(); 
    cout<<endl; 
    c1.accelerate(); 
    cout<<endl; 
    c1.accelerate(); 
    cout<<endl<<endl; 
    cout<<"Simulation starting for deceleration: "<<endl<<endl; 
    c1.brake(); 
    cout<<endl; 
    c1.brake(); 
    cout<<endl; 
    c1.brake(); 
    cout<<endl; 
    c1.brake(); 
    cout<<endl; 
    c1.brake(); 
    cout<<endl; 
    return 0; 
} 
Car::Car(int yearmodel, string make){ 
    this->make = make; 
    this->yearmodel = yearmodel; 
    speed = 0; 
} 
int Car::getyearmodel(){ 
    return this->yearmodel; 
} 
void Car::setyearmodel(int yearmodel){ 
    this->yearmodel = yearmodel; 
} 
string Car::getmake(){ 
    return this->make; 
} 
void Car::setmake(string make){ 
    this->make = make; 
} 
int Car::getspeed(){ 
    return this->speed; 
} 
void Car::setspeed(int speed){ 
    this->speed = speed; 
} 

void Car::accelerate(){ 
cout<<"You accelerated and the speed is now: " << speed + 1;  
this->speed = speed + 1; 
} 

void Car::brake(){ 
    if(speed>=1){ 
        cout<<"You braked and the speed is now: "<<speed-1; 
        this->speed = speed - 1; 
    }else{ 
        cout<<"You can't brake if the car is not moving."; 
    } 
} 
