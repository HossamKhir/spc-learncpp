#include <iostream>

/**
 * @brief Get the Value From User object
 *
 * @return int
 */
int getValueFromUser(void)
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

/**
 * @brief
 *
 * @param x
 */
void printDouble(int x)
{
    std::cout << x << " doubled is " << 2 * x << "\n";
}

int main(void)
{
    // int num{getValueFromUser()};
    // printDouble(num);
    // NOTE or simply
    printDouble(getValueFromUser());
    return 0;
}