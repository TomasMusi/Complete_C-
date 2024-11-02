#include <iostream>

// if statements = do something if a condition is true.
//                 if not, then don't do it.

// great way to do if statements is start with the wrong inputs that user can do
// for example my age is -100;
// my age is 350;

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are older than 18";
    }

    else if (age >= 100)
    {
        std::cout << "You are too old to enter this site"; /* This was not executed, because the first statement is true even if we write 200, so we must put this first */
    }

    else if (age <= 0) /* Since the if statement was not true, this executed because its true */
    {
        std::cout << "You haven't born yet!";
    }

    else
    {
        std::cout << "You are younger than 18";
    }

    return 0;
}