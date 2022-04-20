#include <stdio.h>
#include <main.h>

/**
  * _strcat - function that concatinates two strings
  * @dest: The destination string
  * @src: The source string
  * Return: return a concatinated string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, char_len = 0;

	while (dest[char_len] != '\0')
	{
		char_len++;
	}

	for (; src[i] != '0'; i++)
	{
		dest[char_len] = src[i];
		char_len++;
	}

	dest[char_len] = '\0';
	return (dest);
}
