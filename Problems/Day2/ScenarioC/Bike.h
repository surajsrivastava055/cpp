#include "Vehicle.h"
#include "BikeType.h"
#include <ostream>

class Bike:public Vehicle
{
private:
    float _bike_millage;
    BikeType _bikeType;
public:
    Bike(
    int id,
     std::string _brand,
     VehicleType type,
     float price,
     float _bike_millage,
     BikeType bikeType

    );
    Bike(
     int id,
     std::string _brand,
     VehicleType type,
     float _bike_millage,
     BikeType bikeType

    );

    float CalculateTax() override;
// 

    ~Bike() {
            std::cout<<
            "bike part of vehicle with id\t"<<
            id()
            <<"\tis destroyed\n";

    }

    float bikeMillage() const { return _bike_millage; }

    BikeType bikeType() const { return _bikeType; }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);




    
};


std::string DisplayEnum(const BikeType value);
