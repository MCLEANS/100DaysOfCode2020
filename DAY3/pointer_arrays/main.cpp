#include <iostream>
#include <memory>

int main(int argc , char ** argv){

    std::cout<<"Hello world"<<std::endl;

    std::string names[] = {"jack","james","simon","jane"};

    std::string *current_prefect = names;

    std::cout<<"current prefect = "<< names[3]<<std::endl;


    return 0;
}