#include <iostream>
#include <vector> 


//vectors are arrays which are dynamic in size 
//The size of the vector can change during runtime


void print_vector(std::vector<int> vect){
    //loop through to print the vector compenents
    std::vector<int>::iterator itr;

    for(itr = vect.begin(); itr != vect.end(); itr++){
        std::cout<<*itr<<std::endl;
    }

}

int main(int argc , char *argv[]){
    //initialize a vector during declaration
    std::vector<int> my_vect {2,3,4,5,6};

   /* 

    //push first value to vector
    my_vect.push_back(4);
    //push second value to vector
    my_vect.push_back(7);
    //push third value to vector
    my_vect.push_back(4);

    //initializing a vector with contents of another vector
    std::vector<int> another_vector(my_vect.begin(),my_vect.end());

    */

    //MEMBER FUNCTIONS OF VECTOR


    //push_back function

    std::cout<<" \n push_back function"<<std::endl;

    my_vect.clear(); //delete everything from the vector
    my_vect.push_back(3);
    my_vect.push_back(7);
    my_vect.push_back(6);

    //looping through the vector to print out elements
    //we use an itterator for this operation

    std::vector<int>::iterator itr;

    int counter = 0;

    for(itr = my_vect.begin(); itr != my_vect.end(); itr++ ,counter++ ){
        std::cout <<"Element "<<counter<<" : "<<*itr<<std::endl;
    }

   //print_vector(my_vect);



    //Insert Function   -> insert(itr , element)
    //inserts element before position pointed to by itterator

    std::cout<<" \n insert function "<<std::endl;

    std::vector<int>::iterator it = my_vect.begin();

    my_vect.insert(it,400);

    print_vector(my_vect);

    //pop_back function
    //used to remove the element at the back of the vector

    std::cout<<" \n pop_back function"<<std::endl;

    my_vect.pop_back();
    my_vect.pop_back();

    print_vector(my_vect);

    //erase function -> erase(itr) 

  

    


    return 0;
}