#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"

/*
    A function to check  if all positions of the array are nullptr.
*/

bool CheckNull(Employee* arr[3]);

/*
    A funtion to create 3 objects of Employees in an array.

    Input : 1 array (1 for Employee)
    Output :void
*/

void CreateObjects(Employee* arr1[3]);

/*
    A function to return the pointer to the employee with the highest salary
*/

Employee* EmployeeWithHighestSalary(Employee* arr1[3]);

/*
    A funtion to return the count of all Employees in the array whose _dept value matchs with the seconds
    parameter passed to the function
*/

int CountEmployeeWithGivenDepartment(Employee* arr1[3],DepartmentType dept);

/*
    Find the average_budget for all projects
*/

float AverageBudget(Employee* arr2[3]);

/*
    A function to deallocate the memory.
*/

void freeMemory(Employee* arr1[3]);


#endif // FUNCTIONALITIES_H
