#include <iostream>

int main()
{

    int z; /* declaration */
    z = 5; /* assigment */

    int x = 15; /* You can combine both steps */
    int y = 7;

    int ke = 8;
    int ze = 9;

    int sum = ke + ze;

    std::cout << x + y << std::endl;
    std::cout << sum << std::endl;

    // integer (whole number)

    int age = 17;
    int year = 2024;
    int days = 7;

    // double (number with decimals)

    double km = 3.5;
    double lenghtCm = 21.1;

    // char (only single character)

    char grade = 'A';
    char Initial = 'B';
    char currency = '$';

    std::cout << Initial << std::endl;

    // boolean (true / false)

    bool isStudent = true;
    bool power = false;

    // string (object that represents a sequence of text)
    std::string name = "Tomáš Musil";
    std::string name2 = "Marek Grošek";

    std::cout << name + " " << name2;

    return 0;
}