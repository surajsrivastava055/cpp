#include "Functionalities.h"

void CreateObject(Product *arr[SIZE])
{
    arr[0]=new Product("p100",ProductType::APPLIANCE,45678.0f,"PUMA");
    arr[1]=new Product("p101",ProductType::FMCG,40000.0f,"BATA");
    arr[2]=new Product("p102",ProductType::PERFUME,41332.0f,"BATA");
    arr[3]=new Product("p103",ProductType::APPLIANCE,50000.0f,"PUMA");
    arr[4]=new Product("p104",ProductType::PERFUME,70000.0f,"NYLON");
}

float AverageProductPrice(Product *arr[SIZE])
{
    float total=0.0f;
    for(int i=0;i<SIZE;i++){
        total += arr[i]->produtPrice();
    }
    return total/SIZE;
}

float minimumProductPriceTax(Product *arr[SIZE])
{
    float min=arr[0]->produtPrice();
    for(int i=1;i<SIZE;i++){
        if(min>arr[i]->produtPrice()){
            min=arr[i]->produtPrice();
        }
    }
    return (0.1f * min);
}

float maximumProductPrice(Product *arr[SIZE])
{
    float max=0.0f;
    for(int i=1;i<SIZE;i++){
        if(max<arr[i]->produtPrice()){
            max=arr[i]->produtPrice();
        }
    }
    return max;
}


void freeMemory(Product *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}