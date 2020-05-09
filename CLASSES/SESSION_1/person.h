#ifndef _PERSON_H
#define _PERSON_H

#include <iostream>

enum Gender{
    MALE,
    FEMALE
};

class Person{
    private:
    private:
    public:
        std::string first_name;
        std::string last_name;
        int age;
        Gender gender;


    public:
        Person();
        Person(std::string first_name,
                std::string last_name,
                int age,
                Gender gender);
        ~Person();
        void set_first_name(std::string first_name);
        std::string get_first_name()const;
        void set_last_name(std::string last_name);
        std::string get_last_name(void)const;
        void set_age(int age);
        int get_age(void) const;
        void set_gender(Gender gender);
        Gender get_gender(void) const;

};

#endif //_PERSON_H