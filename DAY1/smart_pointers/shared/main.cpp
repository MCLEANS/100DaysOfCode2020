#include <iostream>
#include <memory>

class Person{
    private:
        std::string name;
        std::string gender;
        int age;
    public:
        Person(std::string name,
                std::string gender,
                int age): name(name),
                            gender(gender),
                            age(age){

                            }
        std::string  get_name(){
            return this->name;
        }

        std::string get_gender(){
            return this->gender;
        }
        int get_age(){
            return this->age;
        }

        ~Person(){
            std::cout<<"Object out of scope"<<std::endl;
        }

};

int main(){

    //shared pointer can have an alias
    //a reference counter is kept and the memory is only freed when the reference counter is zero
    //The dynamic memory allocated in the heap is freed when the last object goes out of scope
    
    std::shared_ptr<Person> person = std::make_shared<Person>("Mcleans","Male",24);

    {

    std::shared_ptr<Person> candidate = person;

    std::cout<<"Details => "<<candidate->get_name()<<" "<<candidate->get_gender()<<" "<<candidate->get_age()<<std::endl;
    

    }


    return 0;
}