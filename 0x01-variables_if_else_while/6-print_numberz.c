#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit < 10)
    {
        char c = digit + '0';
        write(1, &c, 1);
        digit++;
    }

    write(1, "\n", 1);

    return (0);
}

