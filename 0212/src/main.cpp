#include "square.h"
#include "geometry.h"
#include <iostream>

int main(void)
{
    std::cout << "Square has " << getSquareSides() << " sides\n";
    std::cout << "Square of length 5 has perimeter = " << getSquarePerimeter(5)
              << '\n';
    return 0;
}