#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
#include "DepartmentType.h"

int main(){
    Employee* arr1[3];
    Project* arr2[3];

    CreateObjects(arr1,arr2);

    std::cout<<EmployeeWithHighestSalary(arr1);
    std::cout<<CountEmployeeWithGivenDepartment(arr1,DepartmentType::DEVELOPEMENT);
    std::cout<<AverageBudget(arr2);
    freeMemory(arr1);

}