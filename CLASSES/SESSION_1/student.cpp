#include "student.h"

Student::Student(){

    }

Student::Student(std::string registration_number,
                    std::string school,
                    std::string department,
                    std::string course,
                    std::string first_name,
                    std::string last_name,
                    int age,
                    Gender gender): registration_number(registration_number),
                                    school(school),
                                    _department(department),
                                    course(course),
                                    Person(first_name,
                                            last_name,
                                            age,
                                            gender){

    }

void Student::set_registration_number(std::string registration_number){
    this->registration_number = registration_number;
}

std::string Student::get_registration_number(void) const{
    return this->registration_number;
}

void Student::set_school(std::string school){
    this->school  = school;
}

std::string Student::get_school(void) const{
    return this->school;
}

void Student::set_department(std::string department){
    this->_department = department;
}

std::string Student::get_department(void) const{
    return this->_department;
}

void Student::set_course(std::string course){
    this->course = course;
}

std::string Student::get_course(void) const{
    return this->course;
}

Student::~Student(){

}
                                    