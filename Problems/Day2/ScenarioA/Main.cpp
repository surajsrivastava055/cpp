#include<iostream>
#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"

int main(){

Vehicle* arr[3]={nullptr};

CreateObjects(arr);
AveragePrice(arr);

std::cout<<"average price\t"<<AveragePrice(arr);



}