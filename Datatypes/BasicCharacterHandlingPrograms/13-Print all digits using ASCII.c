/*
Print all digits using ASCII

Print 0–9 characters using loop and ASCII values.

ASCII codes 48–57
*/

#include <stdio.h>

int main()
{
    char loop;
    
    for(loop = 48; loop <= 57; loop++)
    {
        printf("%d ASCII value : \'%c\'\n", loop, loop);
    }

    return 0;
}