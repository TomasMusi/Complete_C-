#include <iostream>

void bakePizza();
void BakePizza(std::string topping1);

int main()
{
    bakePizza();                     // this will display Here is your pizza! in C++, the diference is in the parameters also, so you can have same named functions but the parameter can difference them
    /*     bakePizza("Peperoni"); */ // this would display here is your peperoni pizza

    return 0;
}
// Example of function Signature
void BakePizza()
{
    std::cout << "Here is your pizza! " << std::endl;
}

void BakePizza(std::string topping1)
{
    std::cout << "Here is your " << topping1 << std::endl;
}