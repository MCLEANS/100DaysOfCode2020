#include <iostream>
#include "test.h"

/*****************************************
 * Static variables are shared by all class objects
 * ***************************************/

int main(void){

    Test test1;
    Test test2;
    {
    Test test3;
    }

    std::cout<<Test::count<<std::endl;

    return 0;
}