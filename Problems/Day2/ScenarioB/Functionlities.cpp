#include "Functionlities.h"
#include "Car.h"
#include "VehicleType.h"
#include "CarType.h"
#include<iostream>

// this is definition 
void ObjectCreator(Car* container[3]){
 container[0]=new Car(101, "Maruti", VehicleType::CAR, 870000.0f, CarType::SUV );
 container[1]=new Car(102, "Honda", VehicleType::CAR, 1170000.0f, CarType::SEDAN);
 container[2]=new Car(103, "Toyota", VehicleType::CAR, 4570000.0f, CarType::HATCHBACK);

}


float AveragePrice(Car* container[3]){
float total =0.0f;
for( int i =0;i<3; i++){

total += (container[i])->price();
total/=3;

}

return total;

}

void CallCalculateTax(Car* container[3]){
for( int i =0; i<3 ; i++){
std::cout<< "Tax for car with id"<<(container[i])->id()<<"\t\t"<<(container[i])->CalculateTax()<<"\t\t";
}

}

void FreeMemory(Car* container[3]){
for( int i=0;i<3; i++) {
    delete container[i];
}

}
