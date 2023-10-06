#include "Car.h"

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, CAR_CATEGORY ctype, float carPrice, int carSeatCount, int carFuelCapacity)
:_carChassisNumber(carChassisNumber),_carBrand(carBrand),_carModel(carModel),_ctype(ctype),_carPrice(carPrice),_carSeatCount(carSeatCount),_carFuelCapacity(carFuelCapacity)
{
}

Car::Car(std::string carChassisNumber, std::string carBrand, std::string carModel, float carPrice)
:_carChassisNumber(carChassisNumber),_carBrand(carBrand),_carModel(carModel),_carPrice(carPrice)
{
}

float Car::operator+(const Car obj)
{
        return this->carPrice()+obj.carPrice();
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_carChassisNumber: " << rhs._carChassisNumber
       << " _carBrand: " << rhs._carBrand
       << " _carModel: " << rhs._carModel
       << " _ctype: " << DisplayEnum1(rhs._ctype)
       << " _carPrice: " << rhs._carPrice
       << " _carSeatCount: " << rhs._carSeatCount
       << " _carFuelCapacity: " << rhs._carFuelCapacity;
    return os;
}

std::string DisplayEnum1(const CAR_CATEGORY ctype)
{
    if(ctype==CAR_CATEGORY::SEDAN)
    {
        return "SEDAN";
    }else if(ctype==CAR_CATEGORY::SPORTS_HATCHBACK)
    {
        return "SPORTS_HATCHBACK";
    }else
    {
        return "SUV";
    }
}
