#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: string parameter variable
 * @needle: substring parameter variable
 *
 * Return: Returns a pointer to the beginning of the located
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	for (; haystack[i]; i++)
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
