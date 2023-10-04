#include<iostream>

void Demo(){
    int n1=10;
    int n2=20;
    //const is applied on 'int' not on 'int*'

    //ptr is a constant pointer to any integer
    int* const ptr=&n1;

    *ptr=100;
}

int main(){
    Demo();
}