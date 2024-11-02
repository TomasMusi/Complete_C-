#include <iostream>

// do while loop = do some block of code first,
//                 THEN repeat again if condition is true

int main()
{

    /* If we wanted to do normal while loop, and we didnt assign into the int number some number it would always ouput the number is: because when integer variable is not assigned its always 0 */
    int number;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is " << number;

    return 0;
}