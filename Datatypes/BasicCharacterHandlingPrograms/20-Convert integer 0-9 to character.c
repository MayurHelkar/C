/*
Convert integer (0–9) to character

Convert number to ASCII using + '0'.

Type conversion, character encoding
*/

#include <stdio.h>

int main()
{
    char Char = 5;

    int Int = Char + '0';
    printf("Int : %d\n", Int);

    return 0;
}