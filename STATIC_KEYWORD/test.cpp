#include "test.h"

int Test::count = 0;

Test::Test(){
    count++;
}

Test::~Test(){
    count--;
}