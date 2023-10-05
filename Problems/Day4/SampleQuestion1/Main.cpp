#include<iostream>
#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
#include "DepartmentType.h"

int main(){
    Employee* arr1[3]={nullptr};
    
    try{
    CreateObjects(arr1);
    std::cout<<"EmployeeWithHighestSalary : "<<*EmployeeWithHighestSalary(arr1)<<"\n";
    std::cout<<"CountEmployeeWithGivenDepartment: "<<CountEmployeeWithGivenDepartment(arr1, DepartmentType::DEVELOPEMENT)<<"\n";
    std::cout<<AverageBudget(arr1);
    }
    catch(std::runtime_error& ex){
        std::cout<<ex.what();
    }
    freeMemory(arr1);

}