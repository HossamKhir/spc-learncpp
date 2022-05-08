#include <iostream>

int main()
{
    // naming variables (identifiers): should avoid using keywords
    // start w/ a letter or underscore, can't start w/ number
    // a name only contain alphanumeric characters & underscore
    // C++ is case sensitive, val is not Val

    // naming conventions
    // start the identifier w/ lowercase letter
    int value; // valid
    // int Value; // invalid
    // int VALUE; // invalid
    // NOTE: the main function 'int main'

    // start identifiers w/ uppercase letters for user-defined types (class names, structs, enums)

    // w/ multiple words identifiers, there are two conventions
    // snake_case
    int my_variable;
    // camel case
    int myVariable;

    // NOTE: avoid starting identifier w/ underscore, as it is reserved for OS, library & compiler use
    
    return 0;
}