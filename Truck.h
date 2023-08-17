#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
    double load; // Loading Capacity of the truck
public:
    Truck();
    Truck(int, int, double);
    ~Truck();
    void display();
};
#endif