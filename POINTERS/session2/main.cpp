#include <iostream>

int main(int argc, char **argv){

    std::string names[] = {"jack","jane","james"};

    size_t elements = sizeof(names)/sizeof(std::string);
    std::cout<<"Total number of elements in the array: "<<elements<<std::endl;
    return 0;
}