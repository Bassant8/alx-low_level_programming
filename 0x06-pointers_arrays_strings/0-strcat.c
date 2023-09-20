#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to append to.
 * @src: The source string to append from.
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
    int c, c2;

    c = 0;

    /*find the size of dest array*/
    while (dest[c])
	    c++
    /*Iterate through each character in src array until the null byte*/
    for (c2 = 0; src[c2] ; c2++)
	    /*append arcc21 to destiel while overwritting the mill byte in dest*/
        dest[c] = src[c2];

    return (dest);
