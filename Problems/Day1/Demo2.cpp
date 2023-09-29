#include<iostream>
//call by value
void magic(int n1)
{
    std::cout<<"add of n1:\t"<< &n1<<"\n";
    std::cout<<"content of n1:\t"<< n1<<"\n";
    n1=15;
    std::cout<<"after modification\t"<<n1<<"\n";

}
//call by references
void magic2(int& n1)
{
    std::cout<<"add of n1:\t"<< &n1<<"\n";
    std::cout<<"content of n1:\t"<< n1<<"\n";
    n1=15;
    std::cout<<"after modification\t"<<n1<<"\n";

}


int main(){
    int n = 11;
    //magic(n);
    magic2(n);
    std::cout<<"in main after magic\t"<<n<<"\n";

    std::cout<<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"

}