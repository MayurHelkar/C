/*
Convert character to integer

Convert '5' → 5 by subtracting '0'.

Typecasting, ASCII subtraction
*/

#include <stdio.h>

int main()
{
    char Char = '5';

    int Int = Char - '5';

    printf("Int : %d\n", Int);

    return 0; 
}