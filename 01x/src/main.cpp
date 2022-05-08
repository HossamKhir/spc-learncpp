#include <iostream>

int main()
{
    int a{};
    int b{};

    std::cout << "Enter an integer: ";
    std::cin >> a;

    std::cout << "Enter another integer: ";
    std::cin >> b;

    std::cout << a << " + " << b << " is " << a + b << '\n';
    std::cout << a << " - " << b << " is " << a - b << '\n';

    return 0;
}