#include <stdio.h>
#include "main.h"

/**
  * cap_string - a function that capitalizes all words of a string.
  * @s: a string variable
  * Return: return capitalizes string.
  */
char *cap_string(char *s)
{
	int i = 0 , j = 0;
	int cap_cspc = 13;
	char str_spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[j])
	{
		for (; i < cap_cspc; i++)
		{
			if ((j == 0 || s[j - 1] == str_spc[i]) && (s[j] >= 97 && s[j] <= 122))
				s[j] -= 32;
		}
		j++;
	}
	return (s);
}
