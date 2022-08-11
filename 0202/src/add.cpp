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

int main(void)
{
    int x{getValueFromUser()};
    int y{getValueFromUser()};
    std::cout << x << " + " << y << " = " << x + y << "\n";

    return 0;
}