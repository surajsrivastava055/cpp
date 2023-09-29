#include<iostream>
#include "Department.h"
class Student
{
private:
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept; // IT, CS , AI_ML;



public:
    
    Student()=default;
    Student ( int rnum, std::string name, float fees, char grade, Department dept)
    {
        this->_name= name;
        this->_fees=fees;
        this->_roll_number=rnum;
        this->_grade=grade;
        this->_dept = dept;
    }

    
    ~Student() {
           std::cout<<"Student with roll number:\t"
           <<this->_roll_number
           <<"is now destroyed(deleted)\n";         
            }
};

int main(){
//stack
Student s1(101, "harshit", 500.0f, 'A', Department::CS);
Student s2(102, "anuj", 500.0f, 'A', Department::IT);
//heap you get add of object is in heap using pointer heap won't get deleted by themselves as like stack
Student* s3=  new Student (103, "Rohan", 500.0f, 'A', Department::AI_ML);
Student* s4=  new Student (104, "Ajay", 500.0f, 'B', Department::AI_ML);


delete s3;


Student arr[2]={s1,s2};
Student* heapArr[2]={s3,s4};


}