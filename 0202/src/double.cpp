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
    return input; // return the input value to the caller
}

int main(void)
{
    int num{getValueFromUser()}; // initialise num with return of getValueFromUser
    std::cout << num << " doubled is " << 2 * num << "\n";
    return 0;
}