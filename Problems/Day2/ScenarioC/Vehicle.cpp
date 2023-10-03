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



std::string DisplayEnum( const VehicleType value){


if(value==VehicleType::BIKE) return "BIKE";
if(value==VehicleType::CAR) return "CAR";
 return "OTHERS";

}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os<< "_id: " << rhs._id
       << " \t_brand: " << rhs._brand
       << " \t_type: " <<DisplayEnum( rhs._type)
       << " \t_price: " << rhs._price;
    return os;
}


