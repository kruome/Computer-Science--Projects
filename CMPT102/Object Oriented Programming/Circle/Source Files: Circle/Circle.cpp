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
