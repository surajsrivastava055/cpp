#include "Bike.h"
#include "Vehicle.h"
#include "BikeType.h"




Bike::Bike(int id, std::string _brand, VehicleType type, float price, float _bike_millage, BikeType bikeType)
:Vehicle(id, _brand,type, price), _bike_millage(_bike_millage), _bikeType(bikeType)
{
}

Bike::Bike(int id, std::string _brand, VehicleType type, float _bike_millage, BikeType bikeType)
:Vehicle(id, _brand,type), _bike_millage(_bike_millage), _bikeType(bikeType)
{
}


std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os<<static_cast<const Vehicle &>(rhs)
       << "\t _bike_millage: " << rhs._bike_millage
       << "\t _bikeType: " <<DisplayEnum(rhs._bikeType);
    return os;
}

std::string DisplayEnum(const BikeType value)
{
    if(value==BikeType::ATV) return "ATV";
    if(value==BikeType::SPORTS) return "SPORTS";
    return "COMMUTE";

}
