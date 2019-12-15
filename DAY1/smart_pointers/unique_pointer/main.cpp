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

    // a unique pointer can only be assigned to one object
    //memory is allocated dynamically
    //The memory is automatically freed when the object goes out of scope

    std::unique_ptr<Person> person = std::make_unique<Person>("Mcleans","Male",24);

    std::cout<<"Details => "<<person->get_name()<<" "<<person->get_gender()<<" "<<person->get_age()<<std::endl;
    




    return 0;
}