#include "main.h"

/**
 * rev_string - function reverses a string
 * @str: input variable
 */
void rev_string(char *str)
{
	char rev_str = s[0];
	int count_len = 0;

	while (str[count_len] != '\0')
  {
    count_len++;
  }

	for (int i = 0; i < count_len; i++)
	{
		count_len--;
		rev_str = s[i];
		s[i] = s[count_len];
		s[count_len] = rev_str;
	}
}
