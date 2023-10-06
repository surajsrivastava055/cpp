#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>

class Employee
{
private:
    std::string _id;
    std::string _name;
public:
    Employee()=default;
    Employee( std::string id,std::string name)
    :_id(id),_name(id)
        {

        }

    virtual void CalculateTax()=0;   // pure virtual class.
    virtual ~Employee() {
    std::cout<<"Employee with Id :"<<id()<<"\n";
   }

   std::string id() const { return _id; }

   std::string name() const { return _name; }

   friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

   
};

inline std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name;
    return os;
}


#endif // EMPLOYEE_H
