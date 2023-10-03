#include "Vehicle.h"
#include "Type.h"
#include<iostream>

Vehicle::Vehicle(int id, std::string brandName, Type type, float price)
:_id(id), _brand(brandName), _type(type),_price(price)
{
}

Vehicle::Vehicle(int id, std::string brandName, Type type)
:_id(id), _brand(brandName), _type(type)
{
}
