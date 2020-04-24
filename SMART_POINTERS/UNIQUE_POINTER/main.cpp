#include <iostream>
#include <memory>

class Student{
    private:
        bool on_suspension;
        std::string course;
    private:
    public:
    public:
        Student(bool on_suspension,
                std::string course):on_suspension(on_suspension),
                                    course(course){
                                        std::cout<<"student created"<<std::endl;
                                    }

        ~Student(){
            std::cout<<"Student destroyed"<<std::endl;
        }

};

int main(int argc, char **argv){

    std::cout<<"HELLO WORLD"<<std::endl;

    return 0;
}