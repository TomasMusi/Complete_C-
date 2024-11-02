#include <iostream>

// switch = alternative to using many "else if" statements
//          compare one value against matching cases

int main()
{

    int month;
    std::cout << "Enter the month (1-12)";
    std::cin >> month;

    /*     Instead of this you can write shorter version
    if (month == 1)
        {
            std::cout << "It's January";
        }
        else if (month == 2)
        {
            std::cout << "It's February";
        }
        else if (month == 3)
        {
            std::cout << "It's March";
        }
        else if (month == 4)
        {
            std::cout << "It's April";
        }
        else if (month == 5)
        {
            std::cout << "It's May";
        }
        else if (month == 6)
        {
            std::cout << "It's June";
        }
        else if (month == 7)
        {
            std::cout << "It's July";
        }
        else if (month == 8)
        {
            std::cout << "It's August";
        }
        else if (month == 9)
        {
            std::cout << "It's September";
        }
        else if (month == 10)
        {
            std::cout << "It's October";
        }
        else if (month == 11)
        {
            std::cout << "It's November";
        }
        else if (month == 12)
        {
            std::cout << "It's December";
        }
        else
        {
            std::cout << "You entered wrong month";
        }
     */

    switch (month)
    {
    case 1:
        std::cout << "It's January";
        break;

    case 2:
        std::cout << "It's February";
        break;
    default:
        std::cout << "Enter only valid number (1-12)";
    }

    return 0;
}