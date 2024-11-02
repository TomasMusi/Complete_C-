#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main()
{

    std::string firstname = "Tomáš";
    std::string Lastname = "Musil";
    std::string fullname = concatStrings(firstname, Lastname);

    std::cout << "Hello " << fullname;
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}