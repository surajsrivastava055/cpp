#include "Project.h"

Project::Project(std::string name, int duration, int budget)
:_name(name),_duration(duration),_budget(budget)
{
}
std::ostream &operator<<(std::ostream &os, const Project &rhs) {
    os << "_name: " << rhs._name
       << " _duration: " << rhs._duration
       << " _budget: " << rhs._budget;
    return os;
}
