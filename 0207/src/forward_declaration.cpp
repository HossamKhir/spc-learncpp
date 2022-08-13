#include <iostream>

/**
 * @brief function prototype (declaration)
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int add(int x, int y);

int main(void)
{
    std::cout << "3 + 4 = " << add(3, 4) << "\n";

    return 0;
}

/**
 * @brief this is the definition
 * if this was omitted or missed, linker error would happen
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int add(int x, int y)
{
    return x + y;
}