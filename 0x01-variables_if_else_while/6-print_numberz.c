#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        putchar(num + '0');
    }

    putchar(10);  /* ASCII value for newline character */

    return (0);
}

