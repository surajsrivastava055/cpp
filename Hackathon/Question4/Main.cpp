#define SIZE 3
#include<iostream>
#include "Functionlities.h"
#include "Customer.h"

int main(){
    // craeting a empty Container.
    Customer* arr[SIZE]={nullptr};
    Customer* res[SIZE]={nullptr};

    try{
    //calling CreateObjects function.
    createObjects(arr);
    std::cout<<"Object is created \n";

    //calling a function of minimum limit.
    std::cout<<"Card Number is: "<<minimumLimit(arr)<<"\n";

    //calling a function of 
    returnAllCreditCardInstance(arr,CardType::MILES,res);
    std::cout<<"***********All Instances of creditCard **********\n";
    for(int i=0;i<SIZE;i++){
        if(res[i]==nullptr){
            break;
        }
        else{
            std::cout<<*res[i]->creditCard()<<"\n";
        }
    }

    //calling a function MatchingCustomerId()
    MatchingCustomerId(arr,"5676543456");

    //calling a function searchCreditCardType()
    std::cout<<"ALL Customers have Creditcard of SIGNATURE ? : "<<searchCreditCardType(arr,CardType::SIGNATURE);

    }catch(std::runtime_error& ex){
        std::cout<<ex.what();
    }

    //Calling  a function for Memory free
    freeMemory(arr);


}