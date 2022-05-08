#include <iostream>

int main()
{
    // literals (literal constant)
    std::string str{"Hello, World!"};
    int x{5};

    // operators
    // = assignment; == equality
    // + addition; - subtraction; * multiplication; / division
    // % modulus; << insertion|left shift; >> extraction|right shift
    // new, delete, throw are operators

    // operator's arities
    // unary (-): -3, -5
    // binary (almost all operators): std::cin >> x
    // ternary (?:)

    std::cout << 3 + 4 << std::endl;
    std::cout << 3 + 4 - 5 << std::endl;
    std::cout << 2 + 3 * 4 << std::endl;

    return 0;
}