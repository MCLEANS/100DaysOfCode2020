#include <iostream>
#include "staff.hpp"

int main(int argc , char *argv[]){
    Staff lecturer("James",
                    "kamau",
                    34,
                    "male",
                    "Kasarani",
                    "EMP/345",
                    "Engineering",
                    340000,
                    false);
    lecturer.set_name("Jack","Mcleans");
    lecturer.set_car_pass_issued(true);

   std::cout<<lecturer.get_name()<<std::endl;

    return 0;
}