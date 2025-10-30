/*
Find ASCII difference between two characters

Compute absolute difference between ASCII values.

Typecasting, arithmetic operations
*/

#include <stdio.h>

int main()
{
    char charVar_1 = 'a';
    char charVar_2 = 'D';

    if(charVar_1 > charVar_2)
    {
        printf("%c and %c difference is %d\n", charVar_1, charVar_2, charVar_1 - charVar_2);
    }
    else
    {
        printf("%c and %c difference is %d\n", charVar_2, charVar_1, charVar_2 - charVar_1);
    }

    return 0;
}