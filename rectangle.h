#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double, double);
    void setWidth(double);
    void setHeight(double);
    double getArea()const;
};

#endif // RECTANGLE_H
