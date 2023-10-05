#include<iostream>
#include<list>

//alias for data type
using ls =std::list<std::string>;

template <typename T>
class Employee
{
private:
    T _skill;
    std::string _id;
    float _age;
public:
    Employee(T skill,std::string id,float age)
    :_skill(skill),_id(id),_age(age)
    {

    }
    // Employee(){};
    ~Employee() 
    {
        std::cout<<"Employee with Id: "<<_id<<"is destroyed\n";
    }

    template <typename A>
    friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs) {
        os << "_skill: ";
        //for each loop (range-based for cpp)
        for(std::string i:rhs._skill ){
            os<<i<<"\t";
        }

        os << "\n _id: " << rhs._id
           << "\n _age: " << rhs._age;
        return os;
    }
};

int main(){
    ls skill={"coading","AI","cpp","java"};
    //object of class Employee of list of string.
    Employee<ls>* e1=new Employee<ls>(skill,"emp101",28.2f);
    std::cout<<*e1;
}