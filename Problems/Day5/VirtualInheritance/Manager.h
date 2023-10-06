#ifndef MANAGER_H
#define MANAGER_H

#include<iostream>
#include "Employee.h"

class Manager:virtual public Employee
{
private:
    int _team_size;
public:
    Manager(std::string id,std::string name,int tsize)
    :Employee(id,name),_team_size(tsize)
    {

    }

    Manager(int tsize)
    :_team_size(tsize)
    {

    }

    void CalculateTax(){
        std::cout<<"Returning 20% tax";
    }
    virtual ~Manager() {
        std::cout<<"Manager Destroyed\n";
    }

    int teamSize() const { return _team_size; }

    friend std::ostream &operator<<(std::ostream &os, const Manager &rhs);

    
};

inline std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _team_size: " << rhs._team_size;
    return os;
}

#endif // MANAGER_H
