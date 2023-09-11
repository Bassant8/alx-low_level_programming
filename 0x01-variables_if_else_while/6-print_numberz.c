#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++)
    {
        if (digit != 4 && digit != 9)
            putchar(digit + '0');
    }

    putchar('\n');

    return (0);
}

