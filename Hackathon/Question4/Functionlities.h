#ifndef FUNCTIONLITIES_H
#define FUNCTIONLITIES_H

#define SIZE 3
#include<iostream>
#include "Customer.h"

bool CheckNull(Customer* arr[3]);

void createObjects(Customer* arr[SIZE]);

std::string minimumLimit(Customer* arr[SIZE]);

void returnAllCreditCardInstance(Customer* arr[SIZE],CardType type,Customer* res[SIZE]);

void MatchingCustomerId(Customer* arr[SIZE],std::string data1);

bool searchCreditCardType(Customer* arr[SIZE],CardType type);

void freeMemory(Customer* arr[SIZE]);

#endif // FUNCTIONLITIES_H
