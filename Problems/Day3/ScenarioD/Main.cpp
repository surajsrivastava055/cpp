#include <iostream>
#include "Car.h"
#include "Functionlities.h"

int main(){

Vehicle* container[5];// reserving 24 bytes of memoery  null pointer in the start

ObjectCreator(container);

std::cout<<"object created"<<std::endl<<"average price of a car\t"<<AveragePrice(container)<<std::endl;
CallCalculateTax(container);
CarWithMinimumPrice(container);
FreeMemory(container);

}