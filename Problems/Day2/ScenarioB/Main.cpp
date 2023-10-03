#include <iostream>
#include "Car.h"
#include "Functionlities.h"

int main(){

Car* container[3];// reserving 24 bytes of memoery  null pointer in the start

ObjectCreator(container);
//AveragePrice(container);

std::cout<<"object created"<<std::endl<<"average price of a car"<<AveragePrice(container);
FreeMemory(container);

}