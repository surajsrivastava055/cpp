#include<iostream>
#include "/workspaces/cpp/Problems/Day3/ScenarioD/Vehicle.h"



// use case 1: with varibles of primitive types which are not pointers

void Demo(){


    const  int n1=10;// n1 is now immutable, it can't be changed once intialized
    const char grade ='A';
    std::cout<<n1<< "\t"<< grade<<std::endl;
    //n1=20; // error


}
int main(){

Demo();

}