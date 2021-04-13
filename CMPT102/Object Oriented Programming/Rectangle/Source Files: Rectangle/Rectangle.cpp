#include "Rectangle.h"

double Rectangle::getWidth(){
  return width;
}

void Rectangle::setWidth(double width){
  this->width = width;
}

double Rectangle::getHeight(){
  return height;
}

void Rectangle::setHeight(double height){
  this->height = height;
}

double Rectangle::getArea(){
  return (width*height);
}

double Rectangle::getPerimeter(){
  return 2*(width + height);
}
