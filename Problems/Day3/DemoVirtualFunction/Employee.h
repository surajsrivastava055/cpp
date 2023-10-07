#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include "Employee.h"
class Employee
{
private:
    /* data */
public:
    Employee() =default;
   
    virtual void applyForLeave()
    {
        std::cout<<"employee applies for the leave\n";

    }

    virtual void payTax()
    {
        std::cout<<"employee pays the tax\n";
    }

    void Display(){
        std::cout<<"employee display called\n";
    }
    virtual ~Employee() {
        std::cout<<"employee destroyed\n";//for upcasting this is needded to free the memory mark it virtual
    }
};


#endif // EMPLOYEE_H
