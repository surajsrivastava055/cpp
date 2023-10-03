#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"


class Car:public Vehicle
{
private:
    CarType _car_type;
public:
    Car( 
    int id,
     std::string _brand,
     VehicleType type,
     float price,
     CarType carType
     
      );

    Car( 
    int id,
     std::string _brand,
     VehicleType type,
     CarType carType
     );

    float CalculateTax() override;

   
    ~Car() {

        std::cout<<"car part of vehicle id:\t"<<id()<<"destroyed\n"<<std::endl;
    }
    CarType  carType() const{
        return _car_type;
    }
};

#endif // CAR_H
