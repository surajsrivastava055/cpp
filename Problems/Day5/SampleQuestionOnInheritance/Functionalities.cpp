#include "Functionalities.h"
#include "DebitCard.h"
#include "CreditCard.h"

bool CheckNull(Card* arr[SIZE])
{
     int count=0;
     bool b=true;
    for(int i=0;i<SIZE;i++){
        if(arr[i]==nullptr){
            count++;
        }
    }
    if(count==5){
        b= true;
    }
    else{
        b=false;
    }
    return b;
}

void CreateObjects(Card *arr[SIZE])
{
    arr[0]=new DebitCard(6753,456,CardType::MASTERCARD,400.0f,100000,DebitCardCategory::PREMINUM);
    arr[1]=new DebitCard(7867,467,CardType::RUPAY,500.0f,200000,DebitCardCategory::DELUXE);
    arr[2]=new CreditCard(6753,456,CardType::MASTERCARD,450.0f,150000,50000);
    arr[3]=new CreditCard(6700,406,CardType::VISA,600.0f,300000,50000);
    arr[4]=new CreditCard(6003,400,CardType::VISA,600.0f,500000,100000);
}

Card** MatchingIssuerCards(Card *arr[SIZE],CardType value,Card* res[SIZE])
{
    if(CheckNull){
        std::runtime_error("No data Found");
    }
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]==nullptr){
            continue;
        }

        if(arr[i]->issuer()==value){
            res[k++]=arr[i];
        }
    }
    return res;
}

Card* FindingCardMatchesWithNumber(Card *arr[SIZE], int number)
{
    if(CheckNull){
        std::runtime_error("No data Found");
    }
    Card* data;
    for(int i=0;i<SIZE;i++){
        if(arr[i]==nullptr){
            continue;
        }
        if(arr[i]->number()==number){
            data= arr[i];
            break;
        }
    }
    return data;
    
}

int HighestChargeCard(Card* arr[5]){
    if(CheckNull){
        std::runtime_error("No data Found");
    }
    int max=arr[0]->annualCharge();
    Card* data={nullptr};
    for(int i=0;i<5;i++){
        if(arr[i]==nullptr){
            continue;
        }
        if(max<arr[i]->annualCharge()){
            max=arr[i]->annualCharge();
            data=arr[i];
        }
    }
    return data->cvvNumber();
}
