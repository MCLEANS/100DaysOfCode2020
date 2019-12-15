#ifndef _STAFF_HPP
#define _STAFF_HPP

#include "user.hpp"

class Staff : public User{
    private:
        std::string employment_number;
        std::string department;
        int salary;
        bool car_pass_issued;
    private:

    public:
        
    public:
        Staff(  std::string first_name,
                std::string last_name,
                int age,
                std::string gender,
                std::string residence,
                std::string employment_number,
                std::string department,
                int salary,
                bool car_pass_issued
                );
        std::string get_employment_number();
        void set_employment_number(std::string employment_number);
        std::string get_department();
        void set_department(std::string department);
        int get_salary();
        void set_salary(int salary);
        bool get_car_pass_issued();
        void set_car_pass_issued(bool car_pass_issued);
        ~Staff();

};


#endif //_STAFF_HPP
