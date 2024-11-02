#include <iostream>
#include <ctime>

int main()
{
    srand(time(0)); // uses current time to generate numbers

    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "A" << std::endl;
        break;
    case 2:
        std::cout << "B" << std::endl;
        break;
    case 3:
        std::cout << "C" << std::endl;
        break;
    case 4:
        std::cout << "D" << std::endl;
        break;
    case 5:
        std::cout << "E" << std::endl;
        break;

    default:
        std::cout << "errore" << std::endl;
        break;
    }

    return 0;
}