#include <iostream>

void printHi(void)
{
    std::cout << "Hi!\n";
    // void functions need no return statements
    // return 5; // NOTE trying to return inside void functions is compiler error
}

int main(void)
{
    printHi();
    // std::cout << printHi(); // NOTE: using void functions in places where a
    // value is expected causes compilation error
    return 0;
}