#include "main.h"

/**
 * char *_strcpy - function return the copies of string
 * @str_copy: variable for holding copy of str_org
 * @str_org: the orginal variable
 * Return: string copy of str_org
 */
char *_strcpy(char *str_copy, char *str_org)
{
	int i = 0;

	while (str_org[i] != '\0')
	{
		str_copy[i] = str_org[i];
		i++;
	}
	return (str_copy);
}
