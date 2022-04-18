#include "main.h"

/**
 * print_rev - function prints a string, in reverse order
 * str_len - used to count the string length
 * @str: string variable
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
