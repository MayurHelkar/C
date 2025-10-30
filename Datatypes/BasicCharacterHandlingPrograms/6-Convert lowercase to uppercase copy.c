/*
Convert lowercase to uppercase

Change small letters to capital using ASCII subtraction or toupper().

ASCII manipulation, ctype.h
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char Char = 'b';

    if(Char >= 65 && Char <= 90)
    {
    printf("%c", Char);
    printf(" : \'%c\'\n", tolower(Char));        
    }
    else if(Char >= 97 && Char <= 122)
    {
        printf("%c", Char);
        printf(" : \'%c\'\n", toupper(Char));
    }
    else
    {
        printf("Character is not an Alphabet\n");
    }

    return 0;
}