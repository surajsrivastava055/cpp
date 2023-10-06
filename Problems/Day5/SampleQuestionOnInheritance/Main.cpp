#include<iostream>
#include "Card.h"
#include "Functionalities.h"
#define SIZE 5

int main(){

    Card* arr[SIZE];
    Card* res[SIZE]={nullptr};
    try{
    CheckNull(arr);
    CreateObjects(arr);
    Card** arr1=MatchingIssuerCards(arr,CardType::RUPAY,res);
    for(int i=0;i<5;i++){
        if(arr1[i]==nullptr){
            break;
        }
        else{
            std::cout<<*arr[i]<<"\n";
        }
    }

    Card* data=FindingCardMatchesWithNumber(arr,7867);
    if(data==nullptr){
        std::cout<<"FindingCardMatchesWithNumber : Not Found";
    }
    else{
        std::cout<<"FindingCardMatchesWithNumber :"<<data;
    }

    std::cout<<"Highest Salary CVV is :"<<HighestChargeCard(arr)<<"\n";
    }
    catch(std::runtime_error &e){
        std::cout<<e.what()<<"n";
    }


}