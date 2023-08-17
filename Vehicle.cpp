#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() : model(2020), wheels(4)
{
    cout << "Vehicle Default Constructor Called!\n";
}
Vehicle::~Vehicle()
{
    cout << "Vehicle Destructor Called!!\n";
}
void Vehicle::display()
{
    cout << "\tModel: " << model << endl;
    cout << "\tNo of wheels: " << wheels << endl;
}
Vehicle::Vehicle(int m, int w) : model(m), wheels(w)
{
    cout << "Vehicle Overloaded Constructor Called!!" << endl;
}
