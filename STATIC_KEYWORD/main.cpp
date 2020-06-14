#include <iostream>
#include "test.h"

/*****************************************
 * Static variables are shared by all class objects
 * ***************************************/

int main(void){

    Test test1;
    Test test2;
    Test test3;

    std::cout<<"Test 1 id: "<<test1.id<<std::endl;
    std::cout<<"Test 2 id: "<<test2.id<<std::endl;
    std::cout<<"Test 3 id: "<<test3.id<<std::endl;
    

    return 0;
}