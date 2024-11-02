#include <iostream>

// fuction = a block of reusable code
// the program runs only in main function, thats why we need to put the function inside of the element main.

void HappyBday(std::string name, int age)
{

    std::cout << "Happy Birthday!" << name << "You are: " << age << std::endl;
}

void BelowMain();

int main()
{

    std::string name = "Tombak";
    int age = 17;

    HappyBday(name, age);
    HappyBday(name, age);
    HappyBday(name, age);

    BelowMain();
    return 0;
}

void BelowMain() // if we want to use this we have to put above the int main() void BelowMain();
{

    std::cout << "This function is created under the function main" << std::endl;
}