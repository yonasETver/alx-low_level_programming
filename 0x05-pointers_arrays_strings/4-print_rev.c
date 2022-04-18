#include "main.h"

/**
 * print_rev - function prints a string, in reverse order
 * str_len - used to count the string length
 * @str: string variable
 */
void print_rev(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str_len++;
		str++;
	}

	while (str_len > 0)
	{
		_putchar(*str);
		str_len--;
		str--;
	}
	_putchar('\n');
}
