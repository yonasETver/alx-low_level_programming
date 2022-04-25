#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: source string variable
 * @b: variable for contant byte
 * @n: variable for the n byte
 * Return: returns a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
