#include "Employee.h"
#include "Manager.h"
#include <iostream>
int main()
{
    Employee * e1 = new Employee();
    Employee * m1 =new Manager();

Employee *arr[2]{e1,m1};
std::cout<<"for employee object\n";
arr[0]->applyForLeave();
arr[0]->payTax();

std::cout<<"for manager object\n";

arr[1]->applyForLeave();
arr[1]->payTax();

delete arr[0];
delete arr[1];

}