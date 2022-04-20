#include <stdio.h>
#include <main.h>

/**
  * _strcat - function used to concatinate two string
  * @orig: The source string
  * @to_add: The destination string
  * Return: return the concatinated result
  */
char *_strcat(char *to_add, char *orig)
{
	int i = 0, count_len = 0;

	while (to_add[count_len] != '\0')
	{
		count_len++;
	}

	for (; orig[i] != '\0'; i++)
	{
		to_add[count_len] = orig[i];
		count_len++;
	}

	to_add[count_len] = '\0';
	return (to_add);
}
