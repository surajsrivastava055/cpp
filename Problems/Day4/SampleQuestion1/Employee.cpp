#include "Employee.h"

Employee::Employee(std::string id, std::string name, float salary, DepartmentType type, Project *project)
:_id(id),_name(name),_salary(salary),_type(type),_project(project)
{
}