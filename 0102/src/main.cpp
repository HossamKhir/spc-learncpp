#include <iostream>

int main()
{
    // single line comments
    std::cout << "Hello, World!\n"; // everything from here to the end of the line is ignored
    std::cout << "It is very nice to meet you!\n"; // std::cout lives in the iostream library
    std::cout << "Yeah!\n"; // these comments make the code harder to read
    // especially when lines are of different lengths

    std::cout << "Give me more\n";      // well aligned comments are easier to read
    std::cout << "Wouldn't you agree?"; // don't you think

    // sometimes single line comments are placed above lines
    std:: cout << "I have a comment";
    // that way it is easier to read

    /* multi-line comments */
    /* I am a multi-line comment
    this line will be ignored
    so will this*/
    /*
    multi-line comments cannot be nested
    */

//    std::cout << "commented out code" ;

    return 0;
}