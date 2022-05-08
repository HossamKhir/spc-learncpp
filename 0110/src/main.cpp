#include <iostream>

/**
 * @brief five() is a function that returns the value 5
 *
 * @return int
 */
int five()
{
    return 5;
}

int main()
{
    // all of these make use of expressions
    int a{2};           // initialize variable a with literal value 2
    int b{2 + 3};       // initialize variable b with computed value 5
    int c{(2 * 3) + 4}; // initialize variable c with computed value 10
    int d{b};           // initialize variable d with variable value 5
    int e{five()};      // initialize variable e with function return value 5

    // executing an expression is called evaluation
    // expressions are evaluated in statements

    // expression statements
    a = 5;
    2 * 3; // the result is discarded

    std::cout << 2 + 3 << '\n';

    int x{6};
    int y{x - 2};
    std::cout << y << '\n';

    int z{};
    z = x;
    std::cout << z - x << '\n';
    return 0;
}