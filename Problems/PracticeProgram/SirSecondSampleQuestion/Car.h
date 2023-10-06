#ifndef CAR_H
#define CAR_H

#include<iostream>
#include "CAR_CATEGORY.h"

class Car
{
private:
    std::string _carChassisNumber;
    std::string _carBrand;
    std::string _carModel;
    CAR_CATEGORY _ctype;
    float _carPrice;
    int _carSeatCount;
    int _carFuelCapacity;

public:
    Car(
        std::string carChassisNumber,
        std::string carBrand,
        std::string carModel,
        CAR_CATEGORY ctype,
        float carPrice,
        int carSeatCount,
        int carFuelCapacity
    );

    Car(
        std::string carChassisNumber,
        std::string carBrand,
        std::string carModel,
        float carPrice
    );

    Car()=delete;
    Car(const Car&)=default;

    float operator+(const Car obj);

    ~Car() {
        std::cout<<"Car with Id : "<<carBrand()<<" is Destroyed\n";
    }

    std::string carChassisNumber() const { return _carChassisNumber; }
    void setCarChassisNumber(const std::string &carChassisNumber) { _carChassisNumber = carChassisNumber; }

    std::string carBrand() const { return _carBrand; }
    void setCarBrand(const std::string &carBrand) { _carBrand = carBrand; }

    std::string carModel() const { return _carModel; }
    void setCarModel(const std::string &carModel) { _carModel = carModel; }

    CAR_CATEGORY ctype() const { return _ctype; }
    void setCtype(const CAR_CATEGORY &ctype) { _ctype = ctype; }

    float carPrice() const { return _carPrice; }
    void setCarPrice(float carPrice) { _carPrice = carPrice; }

    int carSeatCount() const { return _carSeatCount; }
    void setCarSeatCount(int carSeatCount) { _carSeatCount = carSeatCount; }

    int carFuelCapacity() const { return _carFuelCapacity; }
    void setCarFuelCapacity(int carFuelCapacity) { _carFuelCapacity = carFuelCapacity; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

};

std::string DisplayEnum1(const CAR_CATEGORY ctype);

#endif // CAR_H
