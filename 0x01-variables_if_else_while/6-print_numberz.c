#include <unistd.h>

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
        write(1, &num, 1);
    }

    write(1, "\n", 1);

    return (0);
}

