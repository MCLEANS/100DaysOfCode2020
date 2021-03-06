#include <iostream>

int main(int argc, char **argv){

    std::string names[] = {"jack","jane","james"};

    size_t elements = sizeof(names)/sizeof(std::string);
    std::cout<<"Total number of elements in the array: "<<elements<<std::endl;

    //LOOPING THROUGH ARRAY
    //METHOD 1

    for(int i=0;i<elements;i++){
        std::cout<<names[i]<<" "<<std::flush;
    }
    std::cout<<"\n----------------------------------------\n";

    //METHOD 2

    std::string *pnames = names;
    for(int i = 0; i < elements; i++){
        std::cout<<pnames[i]<<" "<<std::flush;
    }

    std::cout<<"\n----------------------------------------\n";

    //METHOD 3
    std::string *pstart = names;
    std::string *pend = &names[2];

    while(true){
        std::cout<<*pstart<<" "<<std::flush;
        

        if(pstart == pend) break;
        pstart++;
    }

     std::cout<<"\n----------------------------------------\n";
    return 0;
}