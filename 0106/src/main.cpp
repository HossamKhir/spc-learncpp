#include <iostream>

int main()
{
    /**
     * uninitialised variables, lead to unexpected behaviour
     */
    int x;                       // an uninitialised variable
    std::cout << x << std::endl; // unexpected value would be written to the console

    return 0;
}