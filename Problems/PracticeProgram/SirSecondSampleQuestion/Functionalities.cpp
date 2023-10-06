#include "Functionalities.h"

void CreateObjects(Car *arr[SIZE])
{
    arr[0]=new Car("123","tata","m1",CAR_CATEGORY::SEDAN,123456.0f,4,50);
    arr[1]=new Car("124","maruti","m2",CAR_CATEGORY::SPORTS_HATCHBACK,120000.0f,4,50);
    arr[2]=new Car("125","suzuki","m3",CAR_CATEGORY::SUV,500000.0f,4,50);
    
}

float FindAverageFuelCapacity(Car *arr[SIZE])
{
    float total=0.0f;
    for(int i=0;i<SIZE;i++){
        total += arr[i]->carFuelCapacity();
    }
    return total/SIZE;
}

int FindCountOfGivenBrand(Car *arr[SIZE], CAR_CATEGORY ctype)
{
    int count=0;
    for(int i=0;i<SIZE;i++){
        if(ctype==arr[i]->ctype()){
            count++;
        }
    }
    return count;
}

Car *FindBestPassengerCar(Car *arr[SIZE], CAR_CATEGORY ctype)
{
    Car* arr1[SIZE]={nullptr};
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(ctype==arr[i]->ctype()){
            arr1[k++]=arr[i];
        }
    }
    int max=arr1[0]->carSeatCount();
    Car* data;
    for(int i=1;i<k;i++){
        if(max<arr1[i]->carSeatCount()){
            max=arr1[i]->carSeatCount();
            data=arr[i];
        }
    }
    return data;  
}
