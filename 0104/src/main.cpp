#include <iostream>

int main()
{
    // declaration
    int width;
    int y, z;

    // assignment
    width = 5;

    std::cout << width << std::endl;

    // re-assignment
    width = 7;

    // definition = declaration + initialisation/assignment
    // initialisation
    int b = 5; // initialisation w/ assignment operator (copy initialisation)
    int c(7);  // initialisation in parentheses (direct initialisation)
    int d{8};  // initialisation in braces (brace/list/uniform initialisation)
    int a;     // initialised w/ default value (undetermined)

    // zero initialisation
    int height{}; // value set to 0
    // use explicit {0} if the value to be used, use {} if the value is to be replaced 

    return 0;
}