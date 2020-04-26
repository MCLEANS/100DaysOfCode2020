#include <iostream>

int main(int argc, char *argv[]){

   // std::cout<<"HELLO WORLD"<<std::endl;

   int value = 98;
   int *pvalue = &value;

   std::cout<<"value is stored in memory address: "<<pvalue<<std::endl;
   std::cout<<"Size of a pointer is: "<<sizeof(pvalue)<<std::endl;

   //pointer dereferencing
   std::cout<<"The value stored in the specific memory address is: "<<*pvalue<<std::endl;
   //with a pointer you have access to the memory cell and can use it to change memory content.
   *pvalue = 60;
   std::cout<<"int value has changed to: "<<value<<std::endl;
    return 0;
}