#include<iostream>

int main(){

int n=10;
int *ptr = &n;

int ** sptr = &ptr;

std::cout<<n<<"\n";
std::cout<<ptr<<"\n";

std::cout<<*ptr<<"\n";
std::cout<<**ptr<<"\n";




}