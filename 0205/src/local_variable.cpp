#include <iostream>

int add(int x, int y) // declaration & definition here
{
    // z is **out of scope** here
    int z{x + y}; // definition & declaration here
    // z is in scope here
    /* NOTE a good practice is to define a variable as close to 1st use as
    reasonable
    */
    return z;
} // destruction (end of lifetime) here, in opposite direction z, y, x

int main(void)
{
    int a{5};
    int b{6};
    // a & b created & initialised (defined), enters scope

    std::cout << add(a, b) << "\n";

    return 0;
} // a & b go out of scope