#define SIZE 3
#include<iostream>
#include "Functionlities.h"
#include "CreditCard.h"


bool CheckNull(Customer *arr[SIZE])
{
    bool flag=true;
    for(int i=0;i<3;i++){
        if(arr[i]!=nullptr){
            return false;
        }
    }
    return flag;
}

void createObjects(Customer *arr[SIZE])
{
    arr[0]=new Customer("gyan chandra","6387675687",CustomerType::PRIVILEGED,new CreditCard("1234-5678-7654-3456",CardType::NEO,50000.0f,123));
    arr[1]=new Customer("anuj gupta","5676543456",CustomerType::ELITE,new CreditCard("1234-5678-7654-5467",CardType::MILES,100000.0f,555));
    arr[2]=new Customer("neeraj srivastava","9878987654",CustomerType::PRO,new CreditCard("1234-5678-7654-0000",CardType::SIGNATURE,75000.0f,678));
}

std::string minimumLimit(Customer *arr[SIZE])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    float limit=arr[0]->creditCard()->limit();
    Customer* data=arr[0];
    for(int i=1;i<SIZE;i++){
        if(limit>arr[i]->creditCard()->limit()){
            limit=arr[i]->creditCard()->limit();
            data=arr[i];
        }
    }
    return data->creditCard()->number();
}

void returnAllCreditCardInstance(Customer *arr[SIZE], CardType type, Customer *res[SIZE])
{  
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->creditCard()->type()==type){
            res[k++]=arr[i];
        }
    }
}

void MatchingCustomerId(Customer *arr[SIZE], std::string data1)
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    int count=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->id()==data1){
            // std::cout<<arr[i]->creditCard()->type();
            break;
        }
        else{
            count++;
        }
    }
    if(count==SIZE){
        std::cout<<"no data match with this id";
    }
}

bool searchCreditCardType(Customer *arr[SIZE], CardType type)
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    bool flag=true;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->creditCard()->type()!=type){
            flag=false;
        }
    }
    return flag;
}

void freeMemory(Customer *arr[3])
{
    for(int i=0;i<3;i++){
        delete arr[i];
    }
}
