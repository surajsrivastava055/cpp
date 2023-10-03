#ifndef FUNCTIONLITIES_H
#define FUNCTIONLITIES_H
#include "Car.h"

//create objects on heap here is defined
void ObjectCreator(Car* container[3]);


float AveragePrice(Car* container[3]);

//demo of calculate tax;
void CallCalculateTax(Car* container[3]);

//delete all acquired memory
void FreeMemory(Car* container[3]);


#endif // FUNCTIONLITIES_H
