/*
Print all alphabets using loops

Print A–Z and a–z using loops.

for loop, ASCII iteration
*/

#include <stdio.h>

int main()
{
    char loop;

    printf("ASCII value of Character in Ascending Order : A to Z\n");
    for(loop = 65; loop <= 90; loop++)
    {
        printf("ASCII value of %d : \'%c\'\n", loop, loop);
    }

    printf("\n");

    printf("ASCII value of Character in Descending Order : Z to A\n");
    for(loop = 90; loop >= 65; loop--)
    {
        printf("ASCII value of %d : \'%c\'\n", loop, loop);
    }

    printf("\n");

    printf("ASCII value of Character in Ascending Order : A to Z\n");
    for(loop = 97; loop <= 122; loop++)
    {
        printf("ASCII value of %d : \'%c\'\n", loop, loop);
    }

    printf("\n");

    printf("ASCII value of Character in Descending Order : Z to A\n");
    for(loop = 122; loop >= 97; loop--)
    {
        printf("ASCII value of %d : \'%c\'\n", loop, loop);
    }

    return 0;
}