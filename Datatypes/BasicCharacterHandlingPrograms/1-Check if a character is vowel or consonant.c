/*
1-Check if a character is vowel or consonant

Input a single character and check if it belongs to {a, e, i, o, u} or {A, E, I, O, U}; 
otherwise, it’s a consonant.

if-else, char, logical operators
*/

#include <stdio.h>

int main()
{
    char charArray[] = {"aeiouAEIOU"};
    char Char;

    int charArraySize = sizeof(charArray)/ sizeof(charArray[0]);

    char loop;
    for(loop = 0; loop < charArraySize; loop++)
    {


        Char = charArray[loop];
        if('a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U')
        {
            if(Char == '\0' || Char == '\n')
            {
                break;
            }
            printf("\'%c\' is Vowel\n", Char);
        }
    }

    return 0;
}