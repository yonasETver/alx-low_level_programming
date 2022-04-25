#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: destination string variable
 * @src: source string variable
 * @n: bytes from memory area 
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
