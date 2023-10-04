#include<iostream>

void Demo(){
    int n1=10;
    int n2=20;
    //const is applied on 'int' not on 'int*'

    //ptr is a pointer to a Constant integer
    int const *ptr=&n1;

}

int main(){
    Demo();
}