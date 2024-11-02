#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "********** Temperature Conversion **********" << std::endl;
    std::cout << "F = Fehrenheit" << std::endl;
    std::cout << "C = celsius" << std::endl;
    std::cout << "What unit would you like to convert to ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "Fehrenheit" << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in fehrenheit ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << "Celsius" << std::endl;
    }
    else
    {
        std::cout << "Enter a Valid Unit" << std::endl;
    }

    return 0;
}