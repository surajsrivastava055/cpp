#define SIZE 3
#include<iostream>
#include "Car.h"
#include "Functionalities.h"


int main(){
    Car* arr[SIZE];
    CreateObjects(arr);
    std::cout<<"Average Fuel Capacity is : "<<FindAverageFuelCapacity(arr)<<"\n";
    std::cout<<"The Total Count is : "<<FindCountOfGivenBrand(arr,CAR_CATEGORY::SEDAN)<<"\n";
    Car * c1 = arr[0];
    Car * c2 = arr[1];
    std::cout<<"Operator data :"<<*c1+*c2;
    Car* car=FindBestPassengerCar(arr,CAR_CATEGORY::SEDAN);
    std::cout<<" Car Model is : "<<car->carModel()<<"and Car Brand is "<<car->carBrand()<<"\n";

}
