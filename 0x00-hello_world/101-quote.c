#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    ssize_t len = 59;
    ssize_t written_len = write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
    
    if (written_len != len)
        return (1);
    return (1);
}
