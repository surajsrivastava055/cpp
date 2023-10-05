#include<iostream>

template<typename T>
void Display(T arr[3]){
    for(int i=0;i<3;i++){
        std::cout<<"Address: "<<*arr[i]<<"\n";
    }
}

class Employee
{
private:
    std::string _ename;
public:
    Employee(std::string ename):_ename(ename) {}
    ~Employee() {}
};

class Car
{
private:
    std::string _brand;
public:
 Car(std::string brand):_brand(brand) {}
     ~Car() {}
};

int main(){
    Car* arr1[3];
    Employee* arr2[3];

    for(int i=0;i<3;i++){
        arr1[i]=new Car("Maruti");
        arr2[i]=new Employee("gyans");
    }

    Display<Car*>(arr1);
    Display<Employee*>(arr2);

}