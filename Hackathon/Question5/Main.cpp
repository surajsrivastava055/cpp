#define SIZE 3
#include<iostream>
#include "Functionalities.h"
#include "Account.h"

int main(){
    //creating a empty container.
    Account* arr[SIZE]={nullptr};

    try{
    //calling CreateObjects function.
    createObjects(arr);
    std::cout<<"Object is created \n";

    //calling a function AverageAccountBalance()
    std::cout<<"Average Account Balance is :"<<AverageAccountBalance(arr)<<"\n";

    //calling a function HighestAccountBalance()
    std::cout<<"Account Number of Highest Account Balance is :"<<HighestAccountBalance(arr)<<"\n";

    //calling a function to calculate TotalInterestAmount();
    std::cout<<"Total Intrest Ammount is:"<<TotalInterestAmount(arr)<<"\n";

    //calling a function to find minimumAccountBAlance()
    
    std::cout<<"Minimum acount balance Details :"<<*minimumAccountBalance(arr)<<"\n";
    }catch(std::runtime_error& ex){
        std::cout<<ex.what();
    }
    //release memory.
    freeMemory(arr);
}