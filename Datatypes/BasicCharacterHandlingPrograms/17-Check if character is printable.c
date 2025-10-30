/*
Check if character is printable

Determine if ASCII is between 32–126 (visible characters).

ASCII range validation
*/

#include <stdio.h>

int main()
{
    char Char = 126;

    if(Char >= 32 && Char <= 126)
    {
        printf("ASCII value %d : \'%c\'\n", Char, Char);
    }

    return 0;
}