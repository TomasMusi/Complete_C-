#include <iostream>
#include <vector>

// typedef = reversed keyword used to create an additional name
//           (alias) for another data type.
//           New identifier for an existing type
//           Helps with readability and reduces typos

typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;
int main()
{
    pairlist_t pairlist;

    std::string firstname = "Tombak";
    text_t lastname = "Musilos";
    number_t age = 17;

    std::cout << firstname + " " + lastname << std::endl;
    std::cout << age << std::endl;
    return 0;
}

/* Also wea can use this like we did previously */

using text_t = std::string;
using number_t = int;