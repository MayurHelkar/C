/*
Print previous character in ASCII sequence

Show character before input (e.g., B → A).

ASCII arithmetic, decrement
*/

/*
Print next character in ASCII sequence

Display the next ASCII value’s character (e.g., A → B).

ASCII arithmetic, char increment
*/

#include <stdio.h>

int main()
{
    char Char = 's';

    printf("Char previos ASCII value : \'%c\'\n", Char - 1);

    return 0;
}