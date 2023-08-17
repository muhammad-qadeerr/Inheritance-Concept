#ifndef CAR_H
#define CAR_H
#include "Vehicle.h" // Add while inheriting car from vehicle

class Car : public Vehicle // Car Publicly Inherited from Vehicle
{
private:
    int passengers;

public:
    Car();
    Car(int, int, int);
    ~Car();
    void display();
};
#endif