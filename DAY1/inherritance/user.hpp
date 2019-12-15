#ifndef _USER_HPP
#define _USER_HPP 

#include <iostream>

class User{
    private:
    private:

    public:
        std::string first_name;
        std::string last_name;
        int age;
        std::string gender;
        std::string residence;

    public:
        User(std::string first_name,
                std::string last_name,
                int age,
                std::string gender,
                std::string residence
                );
        std::string get_name();
        void set_name(std::string first_name,
                            std::string last_name);
        int get_age();
        void set_age(int age);

        std::string get_residence();
        void set_residence(std::string residence);

        ~user();
};


#endif //_USER_HPP
