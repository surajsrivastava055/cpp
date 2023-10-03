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
     float price
     );

    Vehicle(
    int id ,
    std::string _brand,
    VehicleType type
    );



    virtual float CalculateTax()=0;
    virtual ~Vehicle() {}

    int id() const { return _id; }

    VehicleType type() const { return _type; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);


  

    
};

std::string DisplayEnum(const VehicleType value);


#endif // VEHICLE_H
