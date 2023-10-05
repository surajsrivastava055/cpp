#ifndef PROJECT_H
#define PROJECT_H

#include<iostream>
// #include "";

class Project
{
private:
    std::string _name;
    int _duration;
    int _budget;
public:
    Project(std::string name,int duration,int _budget);
    Project()=delete;
    Project(const Project&)=delete;
    ~Project() {
        std::cout<<"Project with Name :"<<_name<<"id destroyed \n";
    }

    std::string name() const { return _name; }

    int duration() const { return _duration; }

    int budget() const { return _budget; }
};


#endif // PROJECT_H
