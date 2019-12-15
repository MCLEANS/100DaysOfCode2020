#include <iostream>

//lambda functions should be those that are executed only once

int main(int argc , char **argv){

    int value = 0;
    int value1 = 0;
    int value2 = 0;
    
    //return value is actually a function pointer
    //here the variable 'value' is pased to the capture list by value
    //it can only be used but its value cannot be changed since it is just a copy of the initial
    auto addition = [value](int addend){
        int sum  = value + addend;
    };

    //the variable 'value1' has been passed to the capture list by reference
    //it is hence possible to change as well as use its value  
    //addend is a parameter to be passed during calling of the function
    auto assign = [&value1](int addend){
        value1 = addend;
    };

    //All the variable that are within this scope are available to the lambda function by value
    //Sice the available variable is a copy of the initial it can only be used but cannot be changed
    auto addition2 = [=](int addend){
        int sum  = value + value1 + value2 + addend;
    };


    //All the parameters within scope are available to the lambda function by reference
    //they can hence be used as well as changed
    auto assign2 = [&](int addend, int addend1, int addend2){
        value = addend;
        value1 = addend1;
        value2 = addend2;
    };

    //All variables are available by reference except 'value' which is passed by value
    //It can hence not be changed but only used
    auto add = [&,value](int addend){
        value1 = value + value2 + addend;
    };


    //All variables are passed by value except the variable 'value' which is passed by reference
    auto assign3 = [= ,&value](int addend){
        value = value1 + value2 + addend;
    };

    return 0;
}