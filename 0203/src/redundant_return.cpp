#include <iostream>

void printHi(void)
{
    std::cout << "Hi!\n";

    return; // it is allowed to have return w/ no value in void functions
    // but that is redundant
}

int main(void)
{
    printHi();
    return 0;
}