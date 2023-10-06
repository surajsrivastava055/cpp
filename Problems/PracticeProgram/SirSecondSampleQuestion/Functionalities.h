#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3

#include "Car.h"

void CreateObjects(Car* arr[SIZE]);

float FindAverageFuelCapacity(Car* arr[SIZE]);

int FindCountOfGivenBrand(Car* arr[SIZE],CAR_CATEGORY ctype);

Car* FindBestPassengerCar(Car* arr[SIZE],CAR_CATEGORY ctype);

#endif // FUNCTIONALITIES_H
