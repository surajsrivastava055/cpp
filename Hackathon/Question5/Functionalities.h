#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Account.h"
#include<iostream>

#define SIZE 3


bool CheckNull(Account* arr[SIZE]);

void createObjects(Account* arr[SIZE]);

float AverageAccountBalance(Account* arr[SIZE]);

long HighestAccountBalance(Account* arr[SIZE]);

float TotalInterestAmount(Account* arr[SIZE]);

Account* minimumAccountBalance(Account* arr[SIZE]);

void freeMemory(Account* arr[SIZE]);

#endif // FUNCTIONALITIES_H
