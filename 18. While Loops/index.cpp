#include <iostream>

int main()
{

    std::string name;

    while (name.empty()) // this code will run again and again until name.empty is true.
    {
        std::cout << "Enter Your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
}