#include "main.h"

/**
 * print_rev - function prints a string, in reverse order
 * str_len - used to count string length
 * @str: variable of string
 */
void print_rev(char *str)
{
	int str_len = 0;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}

	int j = (str_len - 1);
	
	while (j >= 0)
	{
		_putchar(s[n]);
		j--;
	}
	_putchar('\n');
}
