#include <iostream>

// ternary operator?: = replacement to an if/else statement
// condition ? expression1 : expression2

int main()
{
    /*  Instead of this you can use shorter version

        int grade = 75;

        if (grade >= 60)
        {
            std::cout << "You passed! ";
        }
        else
        {
            std::cout << "You failed! ";
        }


     */

    int grade = 75;

    grade >= 60 ? std::cout << "You pass" : std::cout << "You failed" << std::endl;
    ;

    int number = 8;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "Even" << std::endl;
    ;

    bool hungry = true;
    hungry ? std::cout << "You are hunger" : std::cout << "You are full" << std::endl;
    /*   SAME   std::cout << (hungry? "You are hunger" : "You are full"); */
    return 0;
}