#include "box.h"

Box::Box(double width, double  height, double depth): r(width, height), height(depth){}
double Box::getVolume(){
    return this->r.getArea() * this->height;
}
