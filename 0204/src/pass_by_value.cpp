#include <iostream>

/**
 * @brief parameters x & y are initialised by whatever arguments sent by caller
 *
 * @param x
 * @param y
 * @return int
 */
int printValues(int x, int y)
{
    std::cout << x << "\n";
    std::cout << y << "\n";
}

int main(void)
{
    printValues(6, 7);
    // 6 & 7 are called arguments, and their value is copied to x & y respectively
    return 0;
}