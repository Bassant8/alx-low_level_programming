#include "main.h"

/**
 *_strlen - Returns the length of a string
 *@s: A pointer to a string
 *
 *Description: This function calculates and returns the length of a string.
 *
 *Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s)
    {
	    length++;
	    s++;
    }
    return length;
}
