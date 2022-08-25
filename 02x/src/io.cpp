#include <iostream>
#include "io.h"

int readNumber(void)
{
    int input{};
    std::cin >> input;
    return input;
}

void writeAnswer(int res)
{
    std::cout << res << '\n';
}