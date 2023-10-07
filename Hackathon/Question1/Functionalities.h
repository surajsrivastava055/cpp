#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 5

#include "Product.h"


#include<iostream>

//Creating Objects.
void CreateObject(Product* arr[SIZE]);

//Craeting function to find the averagePrice.
float AverageProductPrice(Product* arr[SIZE]);

//creating function to calculate product tax which roduct have minimum price.
float minimumProductPriceTax(Product* arr[SIZE]);


//creating function to calculate productPrice which product have minimum price.
float maximumProductPrice(Product* arr[SIZE]);


// Memory cleanup
void freeMemory(Product* arr[SIZE]);

#endif // FUNCTIONALITIES_H
