#ifndef _STUDENT_H
#define _STUDENT_H

#include "student.h"
#include "person.h"

class Student : public Person{
    private:
    private:
        std::string registration_number;
        std::string school;
        std::string _department;
        std::string course;

        
    public:
    public:

        Student();

        Student(std::string registration_number,
                std::string school,
                std::string department,
                std::string course,
                std::string first_name,
                std::string last_name,
                int age,
                Gender gender);

        void set_registration_number(std::string registration_number);
        std::string get_registration_number(void) const;
        void set_school(std::string school);
        std::string get_school(void) const;
        void set_department(std::string department);
        std::string get_department(void) const;
        void set_course(std::string course);
        std::string get_course(void) const;

        ~Student();
};


#endif //_STUDENT_H