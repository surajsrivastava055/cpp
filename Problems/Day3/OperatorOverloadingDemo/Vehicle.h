#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include "VehicleType.h"
#include "Vehicle.h"

class Vehicle 
{
private:
    int _id;
    std::string _brand;
    VehicleType _type;
    float _price;
public:
    Vehicle()=delete;
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



    
     ~Vehicle() {

        std::cout
        <<"vehcile with id:"
        <<_id
        <<"is destroyed\n";
    }

    int id() const { return _id; }

    //e1 + e2;   -> e1.magic(67);

     float operator+ (Vehicle e2){
        //current object's price PLUS passes objects's price.
        return this->price() + e2.price();
    }

     float operator+ (Vehicle* e2){
        //current object's price PLUS passes objects's price.
        return this->price() + e2->price();
    }

    VehicleType type() const { return _type; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    float CalculateTax();
    float CalculateTax(float tax_parcent);
    float CalculateTax(float cgst, float sgst);
  

    friend std::ostream &operator<<(std::ostream &obj,const Vehicle &v){
        obj <<"Id: "<<v._id<<"Brand :"<<v._brand 
            <<"Type: "<<DisplayEnum(v._type)<<"Price: "<<v._price;
        return obj;
    }

    
};

std::string DisplayEnum(const VehicleType value);


#endif // VEHICLE_H
