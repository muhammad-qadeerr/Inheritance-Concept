#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
    // private:
protected: // Making memeber variables protected will make them accessable to derived class.
    int model;
    int wheels;

public:
    Vehicle();
    Vehicle(int, int);
    ~Vehicle();
    void setModel(int m) { model = m; }
    void setWheels(int w) { wheels = w; }
    void display();
};
#endif