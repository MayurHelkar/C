/*
Display ASCII value of a character

Print the ASCII integer equivalent of the entered character.

Typecasting char → int, ASCII table
*/

#include <stdio.h>

int main()
{
    unsigned char loop;

    for(loop = 0; loop <= 255; loop++)
    {
        printf("ASCII value of %d : \'%c\'\n", loop, loop);
        if(loop == 255)
        {
            break;
        }
    }

    return 0;
}