#include <iostream>
#include "Car.h"
using namespace std;

Car ::Car() : passengers(5)
{
    cout << "Car Default Constructor Called!\n";
}
Car::~Car()
{
    cout << "Car Destructor Called!!\n";
}
void Car::display()
{
    Vehicle::display(); // As the name of function for both base and derived class is same so we use vehicle::display to specify that it is vehicle's display
    cout << "\tNo. of Passengers: " << passengers << endl;
}
Car::Car(int m, int w, int p) : passengers(p) //, Vehicle(m, w)   // Calling setModel and setWheels Instead
{
    cout << " Car Overloaded Constructor Called!!" << endl;
    setModel(m);
    setWheels(w);
}