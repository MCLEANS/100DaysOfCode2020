#include "test.h"

int Test::count = 0;

Test::Test(){
    count++;
}

Test::~Test(){
    count--;
}

void Test::show_count(){
    std::cout<<count<<std::endl;
}