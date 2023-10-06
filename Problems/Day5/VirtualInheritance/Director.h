#ifndef DIRECTOR_H
#define DIRECTOR_H

#include<iostream>
#include "Employee.h"
#include "Manager.h"
#include "Executive.h"

/*
In multiple Inheritance in CPP, the most derived class is rresponsible
for instanciting the most base class/classes
*/

class Director:public Manager,public Executive
{
private:
    int _budget;
public:
    // Director(std::string id,std::string name,int tsize,std::string location,float budget) 
    // :Employee(id,name),Manager(id,name,tsize),Executive(id,name,location),_budget(budget)
    // {

    // }

    Director(std::string id,std::string name,int tsize,std::string location,float budget) 
    :Employee(id,name),Manager(tsize),Executive(location),_budget(budget)
    {

    }

    void CalculateTax(){
        
    }
    ~Director() {
        std::cout<<"Director is destroyed";
    }

    int budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs);
    
};

inline std::ostream &operator<<(std::ostream &os, const Director &rhs) {
    os << static_cast<const Manager &>(rhs)
       << static_cast<const Executive &>(rhs)
       << " _budget: " << rhs._budget;
    return os;
}

#endif // DIRECTOR_H
