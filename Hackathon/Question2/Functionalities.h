#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3

#include "VehicleType.h"
#include "TouristVehicle.h"

void CraeteObjects(TouristVehicle* arr[SIZE]);

void destroyAllInstance(TouristVehicle* arr[SIZE]);

void  returnAllInstanceWithCondition(TouristVehicle* arr[SIZE],TouristVehicle* res[SIZE]);

float AverageBookChargePerHour(TouristVehicle* arr[SIZE],VehicleType type);

TouristVehicle* MaximumPerhourBooking(TouristVehicle* arr[SIZE]);

// Memory cleanup
void freeMemory(TouristVehicle* arr[SIZE]);

#endif // FUNCTIONALITIES_H
