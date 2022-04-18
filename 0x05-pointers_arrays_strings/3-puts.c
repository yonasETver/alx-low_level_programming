#include "main.h"

/**
 * _puts - a function prints a string
 * @s: string variable
 */
void _puts(char *s)
{
	int i=0;

	while (s[i] != '\0')
	{
		_putchar(str[i]);
    i++;
	}
	_putchar('\n');
}
