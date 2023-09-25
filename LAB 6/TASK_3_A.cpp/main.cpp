#include <iostream>
#include "Coordinate.h"
using namespace std;

int main()
{
    Coordinate c1(1.0, 1.0);
    Coordinate c2(-1.0, -1.0);
    Coordinate c3(3.0, 4.0);


    cout << "Distance from origin (c1): " << c1.getDistance() << endl;
    cout << "Distance from origin (c2): " << c2.getDistance() << endl;
    cout << "Distance from origin (c3): " << c3.getDistance() << endl;


    cout << "c1 == c2: " << (c1 == c2) <<endl;
    cout << "c1 != c2: " << (c1 != c2) << endl;
    cout << "c1 < c2: " << (c1 < c2) << endl;
    cout << "c1 <= c2: " << (c1 <= c2) << endl;
    cout << "c1 > c2: " << (c1 > c2) <<endl;
    cout << "c1 >= c2: " << (c1 >= c2) << endl;

    // Test increment and decrement operators
    cout << "c1 before increment: ";
    c1.display();
    cout << endl;

    cout << "c1 after prefix increment: ";
    (++c1);
    c1.display();
    cout << endl;

    cout << "c1 after postfix increment: ";
    c1++;
    c1.display();
    cout << endl;

    cout << "c1 after decrement: ";
    --c1;
    c1.display();
    cout << endl;

    cout << "c1 after postfix decrement: ";
    c1--;
    c1.display();
    cout << endl;


}
