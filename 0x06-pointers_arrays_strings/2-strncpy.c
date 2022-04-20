#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function to copy a string of one variable to other.
 * @dest: a pointer type string variable
 * @src: a pointer type string variable
 * @n: int variable
 * Return: the copid string
 */
char *_strncpy(char *dest, char *src, int n)
{

int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
