#include "io.h"

int main(void)
{
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a + b);
    return 0;
}