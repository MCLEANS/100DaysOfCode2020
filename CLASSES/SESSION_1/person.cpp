#include "person.h"

int Person::count = 0;

Person::Person(){
    count++;
    std::cout<<"created new person: "<<count<<std::endl;
    
}

Person::Person(std::string first_name,
                std::string last_name,
                int age,
                Gender gender): first_name(first_name),
                                last_name(last_name),
                                age(age),
                                gender(gender){
    count++;    
    std::cout<<"created new person: "<<count<<std::endl;
  
}

void Person::set_first_name(std::string first_name){
    this->first_name = first_name;
}

std::string Person::get_first_name(void)const{
    return this->first_name;
}

void Person::set_last_name(std::string last_name){
    this->last_name = last_name;
}

std::string Person::get_last_name(void) const{
    return this->last_name;
}

void Person::set_age(int age){
    this->age = age;

}

int Person::get_age(void) const{
    return this->age;
}

void Person::set_gender(Gender gender){
    this->gender = gender;
}

Gender Person::get_gender(void) const{
    return this->gender;
}

Person::~Person(){
    std::cout<<"Person destroyed"<<std::endl;
}