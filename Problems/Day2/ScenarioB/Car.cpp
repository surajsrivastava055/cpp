#include "Car.h"


Car::Car(int id, std::string _brand, VehicleType type,float price, CarType carType)
:Vehicle(id, _brand, type, price), _car_type(carType)
{
}

Car::Car(int id, std::string _brand, VehicleType type, CarType carType)
:Vehicle(id, _brand, type ), _car_type(carType)
{
}

float Car::CalculateTax()
{
    return 0.1*price();
}
