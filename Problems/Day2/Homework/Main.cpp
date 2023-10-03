#include <iostream>
#include "Customer.h"
#include "Type.h"
#include "Functionalities.h"



int main(){

Customer* container[5];

CustomerCreator(container);

std::vector<Customer*> list= CreditInRange100_200(container);

for(int i=0; i<list.size() ;i++)
{
std::cout<<*container<<std::endl;
}

std::vector<Customer*> list= TypeOfCustomer(container, Type::PREMIUM);

for(int i=0; i<list.size() ;i++)
{
std::cout<<*container<<std::endl;
}

std::cout<<AverageOfCertainType(container, Type::PREMIUM);

FreeMemory(container);







}