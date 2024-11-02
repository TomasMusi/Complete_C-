#include <iostream>

// && Check if two conditions are true. [must be true true or false false]
// || Check if at least one of two conditions are true. [at least one statement must be true (or)]
// !  Reverse the logical state of its operand. [makes oposite of the statement]

int main()
{

    int temp;
    bool sunny;

    std::cout << "enter The temperature: ";
    std::cin >> temp;
    /*
        if (temp > 0 && temp < 30) // both of these statements must be true.
        {
            std::cout << "The Temperature is great. ";
        }
    */
    if (temp <= 0 || temp >= 30) // one of the statements must be false
    {
        std::cout << "The temperature is bad";
    }

    else
    {
        std::cout << "The Temperature is bad";
    }

    if (sunny == true) // you can also write only (sunny)
    {
        std::cout << "It is sunny outside!";
    }
    else
    {
        std::cout << "It is cloudy outside";
    }

    /*  ! makes it opposite*/

    if (!sunny)
    {
        std::cout << "This will run if sunny is false";
    }
    else
    {
        std::cout << "This will run if sunny is true";
    }

    return 0;
}