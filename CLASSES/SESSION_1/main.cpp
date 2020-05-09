#include <iostream>
#include "student.h"

int main(int agrc, char * argv[]){
    
    Student first_student;
    first_student.set_first_name("Jack");
    std::cout<<"First Name :"<<first_student.get_first_name()<<std::endl;

    Student second_student("EEEQ/009702/2014",
                            "ELECTRICAL AND ELECTRONICS",
                            "ELECTRONICS AND COMPUTER",
                            "COMPPUTER ENGINEERING",
                            "JACK",
                            "MCLEANS",
                            24,
                            MALE);

    std::cout<<"DEPARTMENT : "<<second_student.get_department()<<std::endl;
    
   

    return 0;
}