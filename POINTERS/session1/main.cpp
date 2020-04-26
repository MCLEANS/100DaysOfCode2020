#include <iostream>

int main(int argc, char *argv[]){

   // std::cout<<"HELLO WORLD"<<std::endl;

   int value = 98;
   int *pvalue = &value;

   std::cout<<"value is stored in memory address: "<<pvalue<<std::endl;
   std::cout<<"Size of a pointer is: "<<sizeof(pvalue)<<std::endl;
    return 0;
}