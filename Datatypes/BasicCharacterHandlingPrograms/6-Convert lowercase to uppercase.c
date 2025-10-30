/*
Convert lowercase to uppercase

Change small letters to capital using ASCII subtraction or toupper().

ASCII manipulation, ctype.h
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char Char = 'a';

    printf("%c", Char);
    printf(" : \'%c\'\n", toupper(Char));

    return 0;
}