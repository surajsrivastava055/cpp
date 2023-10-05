#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include "DepartmentType.h"
#include "Project.h"

class Employee
{
private:
    std::string _id;
    std::string _name;
    float salary;
    DepartmentType _type;
    Project* _project;
public:
    Employee(std::string id,std::string name,float salary,DepartmentType _type,Project* _project);
    Employee(const Employee&)=delete;
    Employee()=delete;
    ~Employee() {
        std::cout<<"Employee ID With :"<<_id<<"is destroyed \n";
    }
};

#endif // EMPLOYEE_H
