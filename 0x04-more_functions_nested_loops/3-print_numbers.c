#include "main.h"

/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 * @x: a variable 
 * Return: Always 0.
 */
void print_numbers(void)
{
	int x = 48;

	while (x < 58)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
