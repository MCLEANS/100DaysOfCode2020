#include <iostream>
#include <vector>
#include <array>

//arrays in stl containers provide the implementation of static arrays
//but this type of arrays comes with member and non member functions which give it an edge over the normal arrays

//array<object_type,size> array_name;

using namespace std;

int main(){
    //declare an aray
    array<int, 4> odd_numbers = { 2, 4, 6, 8 };

    //check object at a particular position
    std::cout<< odd_numbers.at(0)<<std::endl;
    std::cout<<odd_numbers.at(3)<<std::endl;


    return 0;
}