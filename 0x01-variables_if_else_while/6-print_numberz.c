#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char digit = '0';

    while (digit <= '9')
    {
        write(1, &digit, 1);
        digit++;
    }

    write(1, "\n", 1);

    return (0);
}

