#include <iostream>

// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each entity needs unique name.
//             A namespace allows for indentically named entities
//             as long as the namespaces are different.

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    int x = 0;
    std::cout << x;
    std::cout << first::x;
    std::cout << second::x;
    return 0;

    /*
        using namespace first;

        std::cout << x;

        assumes that we want to use the variable x everywhere from namespace First

         */

    /* int x = 1; */ // we run to error because we have to variables named same! Each entity needs unique name so we can use namespace

    /*
        using std::cout;
        using std::string;

        string name = "Tombak";
        cout << "hello" << name;
        return 0;

    This way we don't have to write every single time std::cout << but only cout <<
        */
}
