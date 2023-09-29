#include<iostream>
#include "CarType.h"
#include "Vehicle.cpp"
class Car : public Vehicle
{
private:
   
public:
 CarType _cType;
    std::string carColor;
    float carPrice;
    Car(CarType ctype, std::string color, float price) {
            this->carColor=color;
            this->_cType=ctype;
            this->carPrice=price;


    }
    ~Car() {



    }
};