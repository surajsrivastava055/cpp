#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
#include "Employee.h"

class Manager:public Employee
{
private:
    
public:
    Manager() =default;

    void applyForLeave()
    {
        std::cout<<"manager applies for the leave\n";

    }

    void payTax()
    {
        std::cout<<"manager pays the tax\n";
    }

    void Display(){
        std::cout<<"manager display called\n";
    }
    ~Manager() {


        std::cout<<"manager destroyed\n";
    }
};

#endif // MANAGER_H
