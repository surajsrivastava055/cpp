#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Vehicle.h"


//function to create 3 objects on the heap and store 
//their addresses in the container array
void CreateObjects(Vehicle* container[3]);


//fun to find avg of price values of 3 objects in the 
// container array


float AveragePrice(Vehicle* container[3]);

#endif // FUNCTIONALITIES_H
