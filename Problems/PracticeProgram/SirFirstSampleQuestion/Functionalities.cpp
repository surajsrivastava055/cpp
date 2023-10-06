#define SIZE 3
#include "Functionalities.h"
#include "CustomerType.h"
#include "Customer.h"


void createObjects(Customer* arr[SIZE])
{
    arr[0]=new Customer(123,"gyans",CustomerType::VIP,123455.0f);
    arr[1]=new Customer(111,"shubham",CustomerType::PREMINUM,100055.0f);
    arr[2]=new Customer(123,"anuj",CustomerType::REGULAR,50000.0f);
}

void MatchingType(Customer *arr[SIZE], CustomerType ctype, Customer* res[SIZE])
{  
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(ctype==arr[i]->type()){
            res[k++]=arr[i];
        }
    }
}

void AllCustomerInstance(Customer *arr[SIZE],Customer* res1[SIZE])
{
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->customerStoreCredits()>=100 && arr[i]->customerStoreCredits()<=200)
        {
            res1[k++]=arr[i];
        }
    }
}

float AverageOfCustomerStoreCredit(Customer *arr[SIZE], CustomerType ctype)
{
    int count=0;
    float total=0.0f;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->type()==ctype){
            count++;
            total += arr[i]->customerStoreCredits();
        }
    }
    return total/count;
}
