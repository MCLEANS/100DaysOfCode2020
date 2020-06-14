#ifndef _TEST_H
#define _TEST_H

#include <iostream>


class Test{
    private:
        static int count;
    private:
    public:
        int id;

        
    public:
        Test();
        ~Test();
        //static functions can be used to access static class variables.
        static void show_count();
};

#endif //_TEST_H