#include <iostream>



// cin >> (extraction operator)
// cout << (insertion operator)

/* If you are using VS Code you have to enable in settings (write in settings code runner and scroll down and find run in terminal and enable it) */

int main()
{
    std::string name;
    int age;
    /*
        std::cout << "Whats your name? "; // std:.cout works only on strings with out space for example if i write Tomáš Musil only thing that will display is Tomáš
        std::cin >> name;
     */

    std::cout << "Whats your full name ";
    std::getline(std::cin, name);

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Your name is " << name << std::endl;
    std::cout << "Your age is " << age << std::endl;
    return 0;
}

int test()
{

    std::string Foot;
    int fingers;

    std::cout << "How many fingers do you have? " << std::endl;
    std::cin >> fingers;

    std::cout << "How your foot is called? ";
    std::getline(std::cin >> std::ws, Foot); /* <- you must add std::ws, because before function getline is std::cin, as you can see above in the example of the fingers */

    std::cout << "You have " << fingers << " Fingers" << std::endl;
    std::cout << "Your foot is called " << Foot << std::endl;

    return 0;
}