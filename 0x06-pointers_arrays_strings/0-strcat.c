#include <stdio.h>
#include <main.h>

/**
  * _strcat - function used to concatinate two string
  * @src: The source string
  * @dest: The destination string
  * Return: return the concatinated result
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	for (; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}

	dest[n] = '\0';
	return (dest);
}
