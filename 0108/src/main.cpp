#include <iostream>

int main() // google-style would have the opening brace on this line
{          // this is the most common
    // whitespace refers to spaces, tabs & newlines
    // C++ will concatenate strings separated by nothing but whitespace
    std::cout << "Hello,"
                 " world!\n";

    // NOTE: all code inside braces' scope should be indented by 1 tab
    // RECOMMENDED: 1 tab = 4 spaces

    // a line should be of maximum length of 80, if it is longer it is divided
    // properly

    std::cout << "I'm a short line\n";
    std::cout << "This is a really, really, really, really, really, really,"
                 "really, really long line"; // NOTE: indentation at same level

    // on splitting on operators, operators should be at the start of the new
    // line
    std::cout << 3 + 4  // NOTE
                + 5 + 6 // NOTE
                * 7 * 8;
    
    // alignment w/ whitespace allow for better readability
    int cost            = 57;
    int pricePerItem    = 24;

    // notice a new line before a new comment
    int value           = 5;
    int numberOfItems   = 17;

    return 0;
}