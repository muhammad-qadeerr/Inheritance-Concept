/* File Contain: Lecture 20,21     Inheritance and Types of Inheritanvce

    - Interitance:
        - IS-A (IS-A-KIND OF) Relationship.
        - For Example if we have Shape class, the Circle, Rectangle, Triangle classes are inherited classes.
        - Shape Class     ---> Base Class
        - Rectangle, Triangle, Circle   ---> Derived Class
        - Circle is a Shape, Rectangle is a Shape etc...

        // BASE CLASSES                  DERIVED CLASSES
        - Vehicle                       Car, Bus, Truck
        - Person                        Student, Teacher, Employee

        - Derived class will be the bigger class bcz it has boht base class and its own attributes.
        - Base class will be Generic and Derived classes will be Specific.

    - UML Notation: Donated by Hollow Arrow Toward the base class.

    - Benefits of Inheritance
        - Code Reuse
        - Reuse of ENTIRE class

    Lecture 21:

        - Protected Access Specifier
        - Types of Inheritance

*/

#include <iostream>
// #include "Vehicle.h"
// #include "Car.h"
// #include "Truck.h"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Truck.cpp"
using namespace std;

int main()
{
    Car c1(2018, 4, 5);
    Truck t1(2019, 8, 30000);
    // Vehicle v1();
    cout << "--------------------------------------\n";
    c1.display();
    cout << "--------------------------------------\n";
    t1.display();
    cout << "-------------------------------------\n";
    // v1.display();
    // cout << "--------------------------------------\n";

    // Also

    // c1.Vehicle::display();
    // t1.Vehicle::display();

    // cout << sizeof(Vehicle) << endl;
    // cout << sizeof(Car) << endl;
    // cout << sizeof(Truck) << endl;

    return 0;
}