#include "student.hpp"

Student::Student(   std::string first_name,
                    std::string last_name,
                    int age,
                    std::string gender,
                    std::string residence,
                    std::string registration_number,
                    std::string school,
                    int school_fees,
                    bool is_registered_for_exam): User(first_name,
                                                        last_name,
                                                        age,
                                                        gender,
                                                        residence),
                                                        registration_number(registration_number),
                                                        school(school),
                                                        school_fees(school_fees),
                                                        is_registered_for_exam(is_registered_for_exam)
                                                    {

                    }

std::string Student::get_registration_number(){
    return this->registration_number;
}

void Student::set_regstration_number(std::string registration_number){
    this->registration_number = registration_number;
}

std::string Student::get_school(){
    return this->school;
}

void Student::set_school(std::string school){
    this->school = school;
}

int Student::get_school_fees(){
    return this->school_fees;
}
void Student::set_school_fees(int school_fees){
    this->school_fees = school_fees;
}
bool Student::get_is_registered_for_exam(){
    return this->is_registered_for_exam;
}
void Student::set_is_registered_for_exam(bool is_registered_for_exam){
    this->is_registered_for_exam = is_registered_for_exam;
}

Student::~Student(){
    
}