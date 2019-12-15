#include "user.hpp"

User::User( std::string first_name,
            std::string last_name,
            int age,
            std::string gender,
            std::string residence
            ):  first_name(first_name),
                last_name(last_name),
                age(age),
                gender(gender),
                residence(residence){

                    }

void User::set_name(std::string first_name, std::string last_name){
    this->first_name = first_name;
    this->last_name = last_name;
}

std::string User::get_name(){
    std::string user_name = this->first_name + " " + this->last_name;
    return user_name;
}

void User::set_age(int age){
    this->age = age;
}

int User::get_age(){
    return this->age;
}

void User::set_residence(std::string residence){
    this->residence = residence;
}

std::string User::get_residence(){
    return this->residence;
}

User::~User(){
    
}