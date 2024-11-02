#include <iostream>

// return = return a value back to the spot
//          where you called the ecompassing function

double square(double lenght);
double cube(double lenght);

int main()
{
    double lenght = 5.0;
    double area = square(lenght);
    double volume = cube(lenght);

    std::cout << "Area: " << area << "cm2";
    std::cout << "Volume: " << volume << "cm3";
    return 0;
}

double square(double lenght)
{
    double result = lenght * lenght;
    return result; // because we are returning double, we must change the void to double
}

double cube(double lenght)
{
    return lenght * lenght * lenght;
}