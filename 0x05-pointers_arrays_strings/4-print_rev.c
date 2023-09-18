#include "main.h"

/**
*print_rev - Prints a string in reverse followed by a new line
*@s: A pointer to a string
*
*Description: This function prints the characters of a string in reverse
*order to stdout followed by a new line.
*/
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse order */
	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
