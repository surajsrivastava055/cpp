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
    float _salary;
    DepartmentType _type;
    Project* _project;
public:
    Employee(std::string id,std::string name,float salary,DepartmentType type,Project* project);
    Employee(const Employee&)=delete;
    Employee()=delete;
    ~Employee() {
        std::cout<<"Employee ID With :"<<_id<<"is destroyed \n";
    }

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    float salary() const { return _salary; }

    DepartmentType type() const { return _type; }

    Project* project() const { return _project; }
};

#endif // EMPLOYEE_H
