#ifndef _STUDENT_HPP
#define _STUDENT_HPP

#include "user.hpp"
class Student : public User{
    private:
        std::string registration_number;
        std::string school;
        int school_fees;
        bool is_registered_for_exam;


    private:
    public:
    public:
        Student(std::string first_name,
                std::string last_name,
                int age,
                std::string gender,
                std::string residence,
                std::string registration_number,
                std::string school,
                int school_fees,
                bool is_registered_for_exam);
        
        std::string get_registration_number();
        void set_regstration_number(std::string registration);
        std::string get_school();
        void set_school(std::string school);
        int get_school_fees();
        void set_school_fees(int school_fees);
        bool get_is_registered_for_exam();
        void set_is_registered_for_exam(bool is_registered_for_exam);
        ~Student();

};


#endif //_STUDENT_PP