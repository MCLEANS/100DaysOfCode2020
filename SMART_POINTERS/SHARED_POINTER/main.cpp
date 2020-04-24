#include <iostream>
#include <memory>

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
    {
        std::shared_ptr<Student> rude_student;

    {
        std::shared_ptr<Student> mcleans = std::make_shared<Student>(false,"chemisty");
        mcleans->suspend();
        rude_student = mcleans;
        std::cout<<mcleans->confirm_suspension()<<std::endl;
        mcleans->revoke_suspension();

        std::cout<<"First shared pointer going out of scope"<<std::endl;

    }
        std::cout<<rude_student->confirm_suspension()<<std::endl;
        std::cout<<"Second shared pointer going out of scope"<<std::endl;
    }
   
    return 0;
}