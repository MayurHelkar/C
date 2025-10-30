/*
Check if a character is uppercase or lowercase

Determine the case of the input character using ASCII value or conditional checks.

ASCII range ('A'–'Z', 'a'–'z'), conditional branching
*/

#include <stdio.h>

int main()
{
    char Char = 'B';

    if(Char >= 65 && Char <= 90)
    {
        printf("\'%c\' is a Uppercase alphabet\n", Char);
    }

    if(Char >= 97 && Char <= 122)
    {
        printf("\'%c\' is a Lowercase alphabet\n", Char);
    }

    return 0;
}