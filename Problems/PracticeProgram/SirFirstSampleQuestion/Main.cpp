#define SIZE 3

#include<iostream>
#include "Functionalities.h"
#include "Customer.h"
#include "CustomerType.h"


int main(){
    Customer* arr[SIZE]={nullptr};
    Customer* res[SIZE]={nullptr};
    Customer* res1[SIZE]={nullptr};

    createObjects(arr);
    std::cout<<"Object is created\n";

    MatchingType(arr,CustomerType::PREMINUM,res);

    for(int i=0;i<SIZE;i++){
        if(res[i]==nullptr){
            break;
        }
        std::cout<<"Data is : "<<*res[i]<<"\n";
    }

    AllCustomerInstance(arr,res1);
    for(int i=0;i<SIZE;i++){
        if(res1[i]==nullptr){
            break;
        }
        std::cout<<"Data is : "<<*res1[i]<<"\n";
    }

    std::cout<<"Average is :"<<AverageOfCustomerStoreCredit(arr,CustomerType::PREMINUM)<<"\n";

}