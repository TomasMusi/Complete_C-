#include <iostream>

// arithmetic operators = return the result of a specific
//                        arithmetic operation (+ - * /)

int main()
{

    int Students = 20;

    /*     Students += 2; */
    /* Students -= 2; */
    /* Students--; */
    Students++;

    /*  Students *= 2; */
    /* Students/=2; */

    int remain = Students % 3;

    std::cout << Students;
    std::cout << remain;
    
    return 0;
}