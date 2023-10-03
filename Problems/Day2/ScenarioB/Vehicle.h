#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "VehicleType.h"
class Vehicle
{
private:
 int _id;
 std::string _brand;
 VehicleType _type;
 float _price;
public:
    Vehicle(const Vehicle&)= default;
    Vehicle(
     int id,
     std::string _brand,
     VehicleType type,
     float price);

    Vehicle(
    int id ,
    std::string _brand,
    VehicleType type
     );



    virtual float CalculateTax()=0;
    ~Vehicle() {}

    int id() const { return _id; }

    VehicleType type() const { return _type; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }
};

#endif // VEHICLE_H
