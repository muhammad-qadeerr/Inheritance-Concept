#include <iostream>
#include "Truck.h"
using namespace std;

Truck::Truck() : load(50000)
{
    cout << "Truck Default Constructor Called!\n";
}
Truck ::~Truck()
{
    cout << "Truck Destructor Called!!\n";
}
void Truck::display()
{
    Vehicle::display(); // OverRidding/Redefining a function.
    cout << "\tLoading Capacity in KGs: " << load << endl;
}
Truck::Truck(int m, int w, double l) : load(l) //, Vehicle(m, w)  // Calling setModel and setWheels Instead
{
    cout << "Truck Overloaded Constructor Called!!" << endl;
    setModel(m);
    setWheels(w);
}
