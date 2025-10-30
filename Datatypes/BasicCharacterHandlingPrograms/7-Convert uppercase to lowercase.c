/*
Convert uppercase to lowercase

Change capital letters to small using ASCII addition or tolower().

ASCII manipulation, ctype.h
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char Char = 'B';

    printf("%c", Char);
    printf(" : \'%c\'\n", tolower(Char));

    return 0;
}