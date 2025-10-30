/*
Check if a character is alphabet or not

Verify if the input is an alphabetic letter using ASCII or isalpha() function.

Character classification, ctype.h
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char Char = '2';

    if(isalpha(Char))
    {
        printf("\'%c\' is an alphabet", Char);
    }
    else
    {
        printf("\'%c\' is not an alphabet", Char);
    }

    printf("\n");

    printf("Manual method to check for Alphabet :\n");
    Char = 'Z';
    char loop;
    for(loop = 65; loop <= 90; loop++)
    {
        if(Char == loop)
        {
            printf("\'%c\' is an Alphabet\n", loop);

            if(loop == 90)
            {
                loop = 97;
            }
        }
        else if(loop == Char)
        {
            printf("\'%c\' is an Alphabet\n", loop);
        }
        else
        {
            continue;
            printf("\'%c\' is not an Alphabet\n", loop);
        }
    }

    return 0;
}