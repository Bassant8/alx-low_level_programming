#include <unistd.h>
int main(void)
{
    ssize_t len;
    len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1;
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
    return (1);
}

