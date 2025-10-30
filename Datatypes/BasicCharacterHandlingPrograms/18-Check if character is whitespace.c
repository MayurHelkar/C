/*
Check if character is whitespace

Identify space, tab, newline using isspace() or ASCII check.

ctype.h, control characters
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
/*
Common Whitespace Characters in C:
Space character: ' '
Horizontal tab: '\t'
Newline character: '\n' (also known as linefeed)
Vertical tab: '\v'
Form feed: '\f'
Carriage return: '\r'
*/
    char Char = '\f';
    
    printf("%d : \'%c\' is a Whitespace", Char, isspace(Char));

    return 0;
}