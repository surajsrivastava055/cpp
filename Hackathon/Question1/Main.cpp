#define SIZE 5
#include<iostream>
#include "Product.h"
#include "Functionalities.h"

int main(){
    //Creating Empty Container
    Product* arr[SIZE]={nullptr};

    //Calling  CreateObjects function.
    CreateObject(arr);
    std::cout<<"Object is Created\n";

    //calling function to find the averagePrice.
    std::cout<<"Average Product Price is :"<<AverageProductPrice(arr)<<"\n";

    //calling function to find the productTaxAmount.
    std::cout<<"Minimum productPrice Tax is: "<<minimumProductPriceTax(arr)<<"\n";

    //calling a function to find the maximum productPrice() form all instances
    std::cout<<"Maximum productPrice is: "<<maximumProductPrice(arr)<<"\n";

    // Memory cleanup
    freeMemory(arr);
}