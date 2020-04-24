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

        void revoke_suspension(){
            this->on_suspension = false;
        }

        void suspend(){
            this->on_suspension = true;
        }
        bool confirm_suspension()const{
            return this->on_suspension;
        }

};

int main(int argc, char **argv){

   {
       std::unique_ptr<Student> mcleans = std::make_unique<Student>(true,"Mathematics");
       std::cout<<mcleans->confirm_suspension()<<std::endl;
       mcleans->revoke_suspension();
       std::cout<<mcleans->confirm_suspension()<<std::endl;


       std::cout<<"Doing somathing before going out of scope"<<std::endl;

   }

    return 0;
}