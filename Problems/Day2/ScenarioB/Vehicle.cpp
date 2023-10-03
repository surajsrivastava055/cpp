#include "Vehicle.h"
#include "CarType.h"
#include<iostream>

Vehicle::Vehicle(int id, std::string _brand, VehicleType type, float price)
:_id(id), _brand(_brand), _type(type), _price(price)
{
}

Vehicle::Vehicle(int id, std::string _brand, VehicleType type)
:_id(id), _brand(_brand), _type(type)
{
}
