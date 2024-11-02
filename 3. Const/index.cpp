#include <iostream>

// The const keyword specifies that a variable's value is constant
// tells the compiler to prevent anything from modifying it
// (read-only)

// const works here same as in Javascript!
int main()
{
    const double PI = 3.14;
    int radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
    return 0;
}