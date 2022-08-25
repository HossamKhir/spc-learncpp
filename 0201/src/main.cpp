#include <iostream>

void doPrint()
{
    std::cout << "Inside doPrint()\n";
}

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "starting doA()\n";

    doB(); // functions can call functions

    std::cout << "ending doA()\n";
}

/**
 * @brief there are no nested functions (like python)
 *
 * @return int
 */
int main()
{
    std::cout << "Starting main()\n";
    doPrint();
    doPrint(); // functions can be called multiple times
    doA();
    std::cout << "Ending main()\n";
    return 0;
}
