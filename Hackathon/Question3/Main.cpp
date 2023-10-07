#define SIZE 3
#include<iostream>
#include "Bill.h"
#include "Functionalities.h"

int main(){
    // creating a Empty Container.
    Bill* arr[SIZE]={nullptr};

    Bill* res[SIZE]={nullptr};

    try{
    //Calling CreatingObject Function.
    CreateObjects(arr);

    //calling HighestBillAmount function.
    std::cout<<"Invoice Number of Highest Bill Amount is :"<<HighestBillAmount(arr)<<"\n";

    //calling BillAmount function.
    std::cout<<"Bill Amount is :"<<billAmount(arr,"123")<<"\n";

    //calling function billAssociatedInvoice()
    billAssociatedInvoice(arr,res,3456.0f);
    std::cout<<"***********All Instances Whose Associated with BillAssociatedInvoice**********\n";
    for(int i=0;i<SIZE;i++){
        if(res[i]==nullptr){
            break;
        }
        else{
            std::cout<<*res[i]->billAssociatedInvoice()<<"\n";
        }
    }

    //calling a function to MaximumMinimumBillAmount
    MaximumMinimumBillAmount(arr);
    }
    catch(std::runtime_error& ex){
        std::cout<<ex.what();
    }
    //Memory Cleanup
    freeMemory(arr);

}