#include "main.h"

/**
 * char *_strcpy - function copies the string value
 * @char_copy: copy of char_org
 * @char_org: original
 * Return: return the copied reference to the calling
 */
char *_strcpy(char *char_copy, char *char_org)
{
	int i = 0;

	while (char_org[i] != '\0')
	{
		char_copy[i] = char_org[i];
		i++;
	}
	return (char_copy);
}
