#include<iostream>
#include "Director.h"
#include "Employee.h"
#include "Manager.h"

int main(){  
    Director* d1=new Director(
        "d123",
        "Harshit",
        16,
        "pune",
        87868.6f
    );

    std::cout<<"Directed object \n";
    std::cout<<*d1 <<"\n";
    std::cout<<"Id from employee :"<<d1->id();
    std::cout<<"Name from Employee : "<<d1->name();
    std::cout<<"Location for Executive : "<<d1->location();
    std::cout<<"Budget from Director : "<<d1->budget();
    std::cout<<"Calling CalculateTax inherited from Manager class: ";
    d1->Manager::CalculateTax();
    std::cout<<"\n";

    std::cout<<"Calling CalculateTax Director class: ";
    d1->CalculateTax();
    std::cout<<"\n";
    delete d1;
}