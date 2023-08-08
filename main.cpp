#include <iostream>
#include "rectangle.h"
#include "box.h"

using namespace std;


int main()
{
    Rectangle r(10, 30);
    Box b(10, 20, 30);
    cout << "Area: " << r.getArea() << endl;
    cout << "Volume: " << b.getVolume() << endl;
    return 0;
}
