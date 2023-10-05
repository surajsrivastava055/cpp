#include "Employee.h"

Employee::Employee(std::string id, std::string name, float salary, DepartmentType type, Project *project)
:_id(id),_name(name),_salary(salary),_type(type),_project(project)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _type: " << DisplayNum(rhs._type)
       << " _project: " << *rhs._project;
    return os;
}

std::string DisplayNum(DepartmentType dept){
    if(dept==DepartmentType::DEVELOPEMENT){
        return "DEVELOPEMENT";
    }else if(dept==DepartmentType::INTEGRATION){
        return "INTEGRATION";
    }else{
        return "TESTING";
    }
}