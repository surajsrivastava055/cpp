#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "Bill.h"


bool CheckNull(Bill* arr[3]);


void CreateObjects(Bill* arr[SIZE]);

std::string HighestBillAmount(Bill* arr[SIZE]);

float billAmount(Bill* arr[SIZE], std::string invoiceNumber );

void billAssociatedInvoice(Bill* arr[SIZE],Bill* res[SIZE],float threshold);

void MaximumMinimumBillAmount(Bill* arr[SIZE]);

void freeMemory(Bill* arr[SIZE]);


#endif // FUNCTIONALITIES_H
