#ifndef FUNCTIONLITIES_H
#define FUNCTIONLITIES_H

#include "Vehicle.h"


//create objects on heap here is defined
void ObjectCreator(Vehicle* container[5]);


float AveragePrice(Vehicle* container[5]);

//demo of calculate tax;
void CallCalculateTax(Vehicle* container[5]);

//delete all acquired memory
void FreeMemory(Vehicle* container[5]);




#endif // FUNCTIONLITIES_H
