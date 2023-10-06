#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3

#include "Customer.h"

#include<iostream>

void createObjects(Customer* arr[SIZE]);

void MatchingType(Customer *arr[SIZE], CustomerType ctype, Customer* res[SIZE]);

void AllCustomerInstance(Customer* arr[SIZE],Customer* res1[SIZE]);

float AverageOfCustomerStoreCredit(Customer* arr[SIZE],CustomerType ctype);
#endif // FUNCTIONALITIES_H
