#include <iostream>
class Student
{
private:
int _id;
std::string _name;
    /* data */
public:
    Student(/* args */ int id, std::string name) {
        this->_name=name;
        this->_id=id;

    }
    ~Student() {}
};










class Engineer:public Student
{
private:

    /* data */
    std::string _course_name;
public:
    Engineer( int id, std::string name,     
              std::string cname
            
            )
            :Student(id,name)
            {
             this-> _course_name=cname;
             }
    ~Engineer() {}
};


int main(){


    Engineer * e1= new Engineer(101, "harsh", "java");
    Student * s1 = new Student(102,"krish");


    Student* list[2] = {e1,s1};

    std::cout<<*list[1];
}