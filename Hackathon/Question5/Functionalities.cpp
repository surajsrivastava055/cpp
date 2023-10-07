#define SIZE 3
#include "Functionalities.h"
#include<iostream>
#include "SavingAccount.h"
#include "CurrentAccount.h"

bool CheckNull(Account *arr[SIZE])
{
    bool flag=true;
    for(int i=0;i<3;i++){
        if(arr[i]!=nullptr){
            return false;
        }
    }
    return flag;
}


void createObjects(Account *arr[SIZE])
{
    arr[0]=new SavingAccount(123456,46000.0f,1000.0f,SavingAccountType::METRO);
    arr[1]=new SavingAccount(786543,80000.0f,5000.0f,SavingAccountType::SPECIAL);
    arr[2]=new CurrentAccount(7865434,90000.0f,2000.0f,10000.0f,CurrentAccountType::PREMIUM);
}

float AverageAccountBalance(Account *arr[SIZE])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    float avg=0.0f;
    for(int i=0;i<SIZE;i++){
        avg += arr[i]->accountBalance();
    }
    return avg/SIZE;
}

long HighestAccountBalance(Account* arr[SIZE]){
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    long max=arr[0]->accountBalance();
    Account* data=nullptr;
    for(int i=1;i<SIZE;i++){
        if(max<arr[i]->accountBalance()){
            max=arr[i]->accountBalance();
            data=arr[i];
        }
    }
    return data->accountNumber();
}

float TotalInterestAmount(Account *arr[SIZE])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    float amount=0.0f;
    for(int i=1;i<SIZE;i++){
        amount += arr[i]->CalculateInterestAmount();
    }
    return amount;
}

Account* minimumAccountBalance(Account *arr[SIZE])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    float min=arr[0]->accountBalance();
    Account *arr1=arr[0];
    for(int i=1;i<SIZE;i++){
        if(min>arr[i]->accountBalance()){
            min=arr[i]->accountBalance();
            arr1=arr[i];
        }
    }
    return arr1;
}

void freeMemory(Account *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}
