#include <main.h>
#include <stdio.h>

/**
  * _strcat - function that concatinates two strings
  * @dest: The destination string
  * @src: The source string
  * Return: return a concatinated string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*dest != 0)
	{
		dest++;
		i++;
	}

	for (; src[j] != 0)
	{
		*dest = src[i];
		dest++;
		j++;
	}

	*dest = '\0';
	dest -= (i + j);
	return (dest);
}
