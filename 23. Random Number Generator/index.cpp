#include <iostream>

// pseudo-random = NOT truly random (but close)

int main()
{

    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;
    return 0;
}