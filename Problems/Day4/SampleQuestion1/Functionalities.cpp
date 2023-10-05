#include "Functionalities.h"
#include "DepartmentType.h"
#include "Employee.h"

void CreateObjects(Employee *arr1[3])
{
    arr1[0]=new Employee("e101","gyan",98765.0f,DepartmentType::DEVELOPEMENT,new Project("CVV",70,100000));
    arr1[1]=new Employee("e102","shubham",458785.0f,DepartmentType::TESTING,new Project("HRR",100,450000));
    arr1[2]=new Employee("e103","anuj",128765.0f,DepartmentType::DEVELOPEMENT,new Project("CBB",50,78000));

}

Employee *EmployeeWithHighestSalary(Employee *arr1[3])
{
    Employee* result=nullptr;
    float max=arr1[0]->salary();
    for(int i=1;i<3;i++){
        if(max<arr1[i]->salary()){
            max=arr1[i]->salary();
            result=arr1[i];
        }
    }
    return result;
}

int CountEmployeeWithGivenDepartment(Employee *arr1[3],DepartmentType dept)
{
    int count=0;
    for(int i=0;i<3;i++){
        if((arr1[i]->type())==dept){
            count++;
        }
    }
    return count;
}

float AverageBudget(Employee *arr2[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total += arr2[i]->project()->budget();
    }
    return total/3;
}

void freeMemory(Employee *arr1[3])
{
    for(int i=0;i<3;i++){
        delete arr1[i];
    }
}
