// io (input/output) standard library
#include <iostream>

int main()
{
    std::cout << "cout stands for character output\n";
    // << is called insertion operator
    // cout can print strings, numbers, values of variables
    std::cout << 4 << std::endl;

    int x{8};
    std::cout << x;

    // insertion operator can be used multiple times
    std::cout << "Hello,"
              << " world!"
              // use std::endl to send a new line to the console
              << std::endl // endl ensures flushing (showing of content on screen)
              << "x = " << x;

    // usage of \n is preferred as it does not request an output flush
    std::cout << "line 1" << '\n';
    std::cout << "line 2\n";

    // std::cin
    // >> is called extraction operator; cin is short for character input
    std::cout << "enter a number";
    std::cin >> x;
    std::cout << "value entered: " << x;

    // multiple inputs
    int y;
    std::cout << "enter 2 number, separated by a space";
    std::cin >> x >> y;
    std::cout << "x: " << x << "y: " << y;

    return 0;
}