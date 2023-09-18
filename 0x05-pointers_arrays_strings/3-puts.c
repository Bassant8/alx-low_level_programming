#include "main.h"

/**
*_puts - Prints a string followed by a new line to stdout
*@str: A pointer to a string
*
*Description: This function prints the characters of a string to stdout
*followed by a new line.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
