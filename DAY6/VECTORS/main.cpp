#include <iostream>
#include <vector>


int main(int argc , char **argv){

    std::vector<std::string> my_vector{"JACK","JAMES"};

    //check the elements of the vector
    std::vector<std::string>::iterator itr;

     for(itr = my_vector.begin(); itr != my_vector.end(); itr++){
        std::cout<<*itr<<std::endl;
    }

    //add elementsbto the end of the vector
    my_vector.push_back("SMITH");
    my_vector.push_back("JANE");

    //check if the elements were added succesfuly

    std::vector<std::string>::iterator itr1;
    std::cout<<"\n\n"<<std::endl;
    for(itr1 = my_vector.begin(); itr1 != my_vector.end(); itr1++){
        std::cout<<*itr1<<std::endl;

    }

    //insert data to a specific location
    std::vector<std::string>::iterator itr2;
    itr2 = my_vector.begin()+1;
    my_vector.insert(itr2,"MCLEANS");

    //check if data was correctly inserted
    std::vector<std::string>::iterator itr3;
    std::cout<<"\n\n"<<std::endl;
    for(itr3 = my_vector.begin(); itr3 != my_vector.end(); itr3++){
        std::cout<<*itr3<<std::endl;
    }
    return 0;
}