#include <iostream>

/**
 * @brief no parameters here
 *
 */
void doPrint(void)
{
    std::cout << "In doPrint()\n";
}

/**
 * @brief accepts one parameter called x
 *
 * @param x
 */
void printValue(int x)
{
    std::cout << x << "\n";
}

/**
 * @brief accepts 2 parameters x & y of type int, and returns their sum
 *
 * @param x
 * @param y
 * @return int
 */
int printValues(int x, int y)
{
    return x + y;
}

/**
 * @brief argument is the value passed from caller to function in function call
 *
 * @return int
 */
int main(void)
{
    doPrint();     // function call with no arguments
    printValue(6); // function call with a single argument
    printValues(2, 3);     // function call w/ 2 arguments

    return 0;
}
