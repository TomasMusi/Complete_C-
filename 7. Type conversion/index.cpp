#include <iostream>

// type conversion = conversion a value of one data type to another
//                   Implicit = automatic
//                   Explicit = Precede value with new data type (int)

int main()
{
    double x = (int)3.14; // saves like 3 not as as 3.14 because we did conversion from double to integer

    char z = (int)100; // gives us D because of ASCII Table
    std::cout << x << std::endl;

    return 0;
}