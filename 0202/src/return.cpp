#include <iostream>

// int means the function returns an integer to the caller
int returnFive()
{
    return 5; // return statement tells which value to return
}

int main(void)
{

    std::cout << returnFive() << std::endl;
    std::cout << returnFive() + 2 << std::endl;

    returnFive(); // here, 5 still returned, but not stored or used by main
    return 0;
}