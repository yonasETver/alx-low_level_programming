#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: string variable
 * @src: string variable
 * @n: bytes from memory area
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
  
	return (dest);
}
