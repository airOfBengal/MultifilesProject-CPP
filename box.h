#ifndef BOX_H
#define BOX_H
#include "rectangle.h"

class Box {
private:
    Rectangle r;
    double height;
public:
    Box(double, double, double);
    double getVolume();
};

#endif // BOX_H
