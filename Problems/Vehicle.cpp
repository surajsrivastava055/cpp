#include<iostream>
#include "Insurance.cpp"
#include "VehicleType.h"
class Vehicle
{
private:
    

public:
int _vehicleId;
    int _vehicleRegistration;
    VehicleType _vType;
    Insurance _vehicleInsurance;
Vehicle()=default;
    Vehicle(int id, int regNo, VehicleType vtype, Insurance insurance) {
this->_vehicleId=id;
this->_vehicleRegistration=regNo;
this->_vType=vtype;
this->_vehicleInsurance=insurance;




    }
    ~Vehicle() {

  std::cout<<"Vehicle with id:\t"
           <<this->_vehicleId
           <<"is now destroyed(deleted)\n";         
            }

    



};