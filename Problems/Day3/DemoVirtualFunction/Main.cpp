#include "Employee.h"
#include "Manager.h"
#include <iostream>
int main()
{
    Employee * e1 = new Employee();
    Employee * m1 =new Manager();

Employee *e[2]{e1,m1};
std::cout<<"for employee object\n";
e[0]->applyForLeave();
e[0]->payTax();

std::cout<<"for manager object\n";

e[1]->applyForLeave();
e[1]->payTax();


}