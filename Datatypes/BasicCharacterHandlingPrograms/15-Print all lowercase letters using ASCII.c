/*
Print all lowercase letters using ASCII

Loop through ASCII 97–122 to print lowercase alphabets.

Loops, character literals
*/

#include <stdio.h>

int main()
{
    char loop;

    for(loop = 97; loop <= 122; loop++)
    {
        printf("ASCII value %d : \'%c\'\n", loop, loop);
    }

    return 0;
}