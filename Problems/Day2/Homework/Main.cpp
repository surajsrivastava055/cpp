#include <iostream>
#include "Customer.h"
#include "Type.h"
#include "Functionalities.h"



int main(){

Customer* container[5];

CustomerCreator(container);

std::cout<<"\nCustomer with credit range 100-200\n\n";

std::vector<Customer*> list1= CreditInRange100_200(container);

for(int i=0; i<list1.size() ;i++)
{
std::cout<<*list1[i]<<std::endl;
}

std::cout<<"\nCustomer with Type premium \n\n";

std::vector<Customer*> list2= TypeOfCustomer(container, Type::PREMIUM);

for(int i=0; i<list2.size() ;i++)
{
std::cout<<*list2[i]<<std::endl;
}
std::cout<<"\nAverage credit of premium type customers:\t";

std::cout<<AverageOfCertainType(container, Type::PREMIUM)<<std::endl<<std::endl;

FreeMemory(container);







}