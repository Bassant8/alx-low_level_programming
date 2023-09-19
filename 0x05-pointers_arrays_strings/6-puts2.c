#include "main.h"

/**
 *puts2 - prints every character of a striDS
 * 
 *@str: string parameter input
 *
 *Return: Nothing
*/

void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (i % 2 == 0)
        {
            putchar(str[i]);
        }
    }
    _putchar('\n');
}
