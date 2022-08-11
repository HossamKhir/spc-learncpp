#include <iostream>

/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int add(int x, int y)
{
    return x + y;
}

int main(void)
{
    std::cout << add(4, 5) << "\n";
    return 0;
}