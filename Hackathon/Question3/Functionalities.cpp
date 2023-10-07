#include "Functionalities.h"
#include "Invoice.h"

bool CheckNull(Bill *arr[SIZE])
{
    bool flag=true;
    for(int i=0;i<3;i++){
        if(arr[i]!=nullptr){
            return false;
        }
    }
    return flag;
}

void CreateObjects(Bill *arr[SIZE])
{
    arr[0]=new Bill(1234.0f,200.0f,new Invoice("123",InvoiceType::PAPER_SLIP,2));
    arr[1]=new Bill(1234.0f,200.0f,new Invoice("100",InvoiceType::SMS_GENERATED,3));
    arr[2]=new Bill(1234.0f,200.0f,new Invoice("101",InvoiceType::E_BILL,5));
}


std::string HighestBillAmount(Bill *arr[SIZE])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    Bill* data=arr[0];
    float max=arr[0]->billAmount();
    for(int i=1;i<SIZE;i++){
        if(max<arr[i]->billAmount()){
            max=arr[i]->billAmount();
            data=arr[i];
        }
    }
    return data->billAssociatedInvoice()->invoiceNumber();
}

float billAmount(Bill *arr[SIZE], std::string invoiceNumber)
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    float amount=0.0f;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->billAssociatedInvoice()->invoiceNumber()==invoiceNumber){
            amount=arr[i]->billAmount();
        }
    }
    return amount;
}

void billAssociatedInvoice(Bill *arr[SIZE], Bill *res[SIZE],float threshold)
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    int k=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->billAmount()>threshold){
            res[k++]=arr[i];
        }
    }
}

void MaximumMinimumBillAmount(Bill *arr[SIZE])
{
    if(CheckNull(arr)){
        throw std::runtime_error("Data is empty");
    }
    float max=arr[0]->billAmount();
    float min=arr[0]->billAmount();
    for(int i=0;i<SIZE;i++){
        if(max<arr[i]->billAmount()){
            max=arr[i]->billAmount();
        }
        if(min>arr[i]->billAmount()){
            min=arr[i]->billAmount();
        }
    }
    std::cout<<"Maximum amount is :"<<max<<"\n";
    std::cout<<"Minimum amount is :"<<min<<"\n";    
}


void freeMemory(Bill *arr[3])
{
    for(int i=0;i<3;i++){
        delete arr[i];
    }
}
