#include "main.h"

/**
 * rev_string - function reverses a string
 * @str: input variable
 */
void rev_string(char *str)
{
	char rev_str = str[0];
	int count_len = 0, i = 0;

	while (str[count_len] != '\0')
	{
		count_len++;
	}

	while (i < count_len)
	{
		count_len--;
		rev_str = str[i];
		str[i] = s[count_len];
		str[count_len] = rev_str;
		i++;
	}
}
