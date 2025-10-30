/*
Print all uppercase letters using ASCII

Loop through ASCII 65–90 to print uppercase alphabets.

Loops, character literals
*/

#include <stdio.h>

int main()
{
    char loop;

    for(loop = 65; loop <= 90; loop++)
    {
        printf("ASCII value %d : \'%c\'\n", loop, loop);
    }

    return 0;
}