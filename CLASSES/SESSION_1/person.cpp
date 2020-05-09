#include "person.h"

Person::Person(){

}
Person::Person(std::string first_name,
                std::string last_name,
                int age,
                Gender gender): first_name(first_name),
                                last_name(last_name),
                                age(age),
                                gender(gender){
                                    
                                }

Person::~Person(){

}