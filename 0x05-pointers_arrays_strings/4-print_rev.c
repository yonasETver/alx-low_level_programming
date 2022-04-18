#include "main.h"

/**
 * print_rev - function prints a string, in reverse order
 * str_len - used to count string length
 * @str: variable of string
 */
void print_rev(char *str)
{
	int str_len = 0, i =0, j;
	
	while (str[i] != '\0')
	{
		str_len++;
		i++;
	}

	j = (str_len - 1);
	
	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}
	_putchar('\n');
}
