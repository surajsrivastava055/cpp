#include<iostream>

int main(){

     char  arr[] =  "hello";

    std::string str= "hello";
    std::cout<<"char\t"<<&arr
    <<std::endl
    <<"string\t"<<&str;



    /* std::cout<<"with double commas\t"<< &arr<<std::endl;//gives address
      std::cout<<"with double commas\t"<< &arr[1]<<std::endl;//gives string from 1st position ello
        std::cout<<"with double commas\t"<< arr[1]<<std::endl; // gives specific char fromn that index ie e
    std::cout<< arr+1<<std::endl;// works same like &arr[1] gives string from that postion to the end
    std::cout<<"  double commas\t"<< 1[arr]<<std::endl;//gives e content of that position
     std::cout<< arr+2<<std::endl; // llo content from that position 2 llo
std::cout<<"with curly braces from here";
    char  arr3[] =  {'h','e','l','l','o','\0'};
    std::cout<<"with curly  with & \t"<< &arr3<<std::endl;//gives address
      std::cout<<"with curly braces with add\t"<< &arr3[1]<<std::endl;//gives string from 1st position ello
        std::cout<<"with curly braces\t"<< arr3[1]<<std::endl; // gives specific char fromn that index ie e
    std::cout<< "arr3+1\t"<<arr3+1<<std::endl;// works same like &arr[1] gives string from that postion to the end
    std::cout<<"curly braces\t"<< 1[arr3]<<std::endl;//gives e content of that position
     std::cout<< arr3+2<<std::endl; // llo content from that position 2 llo

    std::cout<<"with curly braces arr3\t"<<arr3<<std::endl;
     std::cout<<"arr3+1"<< arr3+1<<std::endl;
     int arr2[] ={1,2,3,4,5};

      std::cout<<"integer array"<< arr2<<std::endl;
      std::cout<<"integer array"<< 1[arr2]<<std::endl;//behaves just like arr[i] ie 2;
      */



}