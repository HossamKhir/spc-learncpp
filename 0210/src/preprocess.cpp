#include <iostream>

// it's recommended to keep this type of macros in legacy code
#define MY_NAME "Hossam"

#define PRINT_JOE

int main(void)
{
#ifdef MY_NAME
    std::cout << "My name is: " << MY_NAME << '\n';
#endif
#ifdef PRINT_JOE
    std::cout << "Joe" << '\n';
#endif

#ifdef PRINT_BOB
    std::cout << "Bob" << '\n';
#endif

#ifndef PRINT_BOB
    std::cout << "Bob" << '\n';
#endif
    return 0;
}