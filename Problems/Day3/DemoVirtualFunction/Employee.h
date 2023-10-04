#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
class Employee
{
private:
    /* data */
public:
    Employee() =default;
    void applyForLeave()
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
    ~Employee() {
        std::cout<<"employee destroyed\n";
    }
};


#endif // EMPLOYEE_H
