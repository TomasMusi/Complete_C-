#include <iostream>

// break = break out of a loop
// continue = skip current iteration

int main()
{

    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue; // if we use break it will stop at 12, but continue just skips it
        }

        std::cout << i << std::endl;
    }

    return 0;
}