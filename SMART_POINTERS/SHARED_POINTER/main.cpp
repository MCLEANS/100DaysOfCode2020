#include <iostream>

class Student{
    private:
        bool is_suspended;
        std::string course;
    private:
    public:
    public:
        Student(bool is_suspended,
                std::string course):is_suspended(is_suspended),
                                    course(course){

            std::cout<<"Student created"<<std::endl;
                                
                                }

        ~Student(){
            std::cout<<"Student destroyed"<<std::endl;
        }

        void revoke_suspension(){
            this->is_suspended = false;
        }

        void suspend(){
            this->is_suspended = true;
        }

        bool confirm_suspension()const{
            return this->is_suspended;
        }
};


int main(int argc, char *argv[]){
   
    return 0;
}