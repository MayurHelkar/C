/*
Check if a character is digit

Identify if the character lies between '0' and '9'.

ASCII validation, isdigit()
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char digit;

    digit = '9';

    if(isdigit(digit))
    {
        printf("\'%c\' is a Digit\n", digit);
    }
    else
    {
        printf("\'%c\' is not a Digit\n", digit);
    }

    printf("Manual method to check if the digit is from \'0\' to \'9\' :\n");
    char loop;
    for(loop = 48; loop <= 59; loop++)
    {
        if(digit == loop)
        {
            printf("\'%c\' is a Digit\n", digit);
        }
        
    }

    return 0;
}