#include<iostream>
#include "VehicleType.h"
#include "Vehicle.h"

void Demo(){
    Vehicle v1(101,"MAruti",VehicleType::CAR,89000.0f);
    Vehicle v2(102,"MAruti",VehicleType::CAR,80000.0f);

    Vehicle* v3=new Vehicle(101,"MAruti",VehicleType::CAR,89000.0f);
    Vehicle* v4=new Vehicle(102,"MAruti",VehicleType::CAR,89000.0f);

    float ans=v1+v2;

    std::cout<<v1+v2<<"\n";

    std::cout<<(*v3)+(*v4)<<"\n";

}

int main(){
    Demo();
}
