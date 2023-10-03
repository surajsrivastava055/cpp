#ifndef VEHICLE_H
#define VEHICLE_H
#include "Type.h"
#include<iostream>
class Vehicle
{
private:
int _id;
std::string _brand;
Type _type;
float _price;


    /* data */
public:
    Vehicle(
            int id,
            std::string brandName,
            Type type,
            float price
            );

    Vehicle(
            int id,
            std::string brandName,
            Type type

            );
    //defaulted copy constructor //shallow copy
    //i will not write the body of copy constructor. compilerw
    //will generate a default version of it during compilation
    Vehicle(const Vehicle&)=default;
//copy constructor
//     Vehicle(const Vehicle&)
// {
//     this->_id=obj._id; full version and how to do it

// }
    ~Vehicle() {
        std::cout<<"vehicle with id"<<_id<<"\tdestroyed";
    }

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    std::string brand() const { return _brand; }


    float price() const { return _price; }

};

#endif // VEHICLE_H
