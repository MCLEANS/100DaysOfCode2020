#include "staff.hpp"

Staff::Staff(std::string first_name,
            std::string last_name,
            int age,
            std::string gender,
            std::string residence,
            std::string employment_number,
            std::string department,
            int salary,
            bool car_pass_issued
            ):  User(first_name,
                    last_name,
                    age,
                    gender,
                    residence),

                    employment_number(employment_number),
                    department(department),
                    salary(salary),
                    car_pass_issued(car_pass_issued){

                }

std::string Staff::get_employment_number(){
    return this->employment_number;
}

void Staff::set_employment_number(std::string employment_number){
    this->employment_number = employment_number;
}

std::string Staff::get_department(){
    return this->department;
}

void Staff::set_department(std::string department){
    this->department = department;
}

int Staff::get_salary(){
    return this->salary;

}

void Staff::set_salary(int salary){
    this->salary = salary;
}

void Staff::set_car_pass_issued(bool car_pass_issued){
    this->car_pass_issued = car_pass_issued;
}

bool Staff::get_car_pass_issued(){
    return this->car_pass_issued;
}

Staff::~Staff(){
    
}