#include <iostream>
#include "staff.hpp"
#include "student.hpp"

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

    Student first_year("Timothy",
                        "Samuel",
                        23,
                        "male",
                        "South B",
                        "EEEQ/00921/2015",
                        "Engineering",
                        23000,
                        false
                        );

    lecturer.set_name("Jack","Mcleans");
    lecturer.set_car_pass_issued(true);

    first_year.set_residence("Roysambu");
    first_year.set_is_registered_for_exam(true);


   std::cout<<lecturer.get_name()<<std::endl;
   std::cout<<first_year.get_residence()<<std::endl;

    return 0;
}