#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "Project.h"

/*
    A funtion to create 3 objects of project in an array.
    Also, create 3 objects of Employees in a seprate array.
    Link one Project to one Employee.

    Input : 2 array (1 for Employee and 1 for Project)
    Output :void
*/

void CreateObjects(Employee* arr1[3], Project* arr2[3]);

/*
    A function to return the pointer to the employee with the highest salary
*/

Employee* EmployeeWithHighestSalary(Employee* arr1[3]);

/*
    A funtion to return the count of all Employees in the array whose _dept value matchs with the seconds
    parameter passed to the function
*/

int CountEmployeeWithGivenDepartment(Employee* arr1[3]);

/*
    Find the average_budget for all projects
*/

float AverageBudget(Project* arr2[3]);

/*
    A function to deallocate the memory.
*/

void freeMemory(Employee* arr1[3]);


#endif // FUNCTIONALITIES_H
