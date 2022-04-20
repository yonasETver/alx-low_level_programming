#include "main.h"

/**
  * string_toupper - function that change lowercase to upper
  * @p: the lowercase string variable
  * Return: the variable all in uppercase
  */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
    i++;
	}

	return (p);
}
