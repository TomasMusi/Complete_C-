#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter Your name ";
    std::getline(std::cin, name);

    if (name.length() > 12)
    {
        std::cout << "Your name can't be over 12 characters ";
    }
    else
    {
        std::cout << "Welcome " << name << std::endl;
    }

    if (name.empty()) // gives you boolean (true or false) checks if something is entered
    {
        std::cout << "You didn't enter your name ";
    }
    else
    {
        std::cout << "Hello " << name;
    }

    name.length();
    name.empty();
    name.clear();
    name.append("gmail.com");
    name.at(1);
    name.insert(0, "@");
    name.find(' ');
    name.erase(0, 3); 

    return 0;
}