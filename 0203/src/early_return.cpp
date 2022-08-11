#include <iostream>

void print(void)
{
    std::cout << "A";

    return; // early return is whenever a return is found before the end of the
    // function body
    // NOTE early return can be inside non-void functions as well

    std::cout << "B"; // this is called unreachable code
}

int main(void)
{
    print();
    return 0;
}