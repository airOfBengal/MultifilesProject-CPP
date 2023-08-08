#include "rectangle.h"


Rectangle::Rectangle(){
    this->width = 5;
    this->height = 5;
}

Rectangle::Rectangle(double width, double height): width(width), height(height){}

void Rectangle::setWidth(double width){
    this->width = width;
}

void Rectangle::setHeight(double height){
    this->height = height;
}

double Rectangle::getArea()const {
    return this->width * this->height;
}
