#include "main.h"

/**
 * print_line -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
    x = 1;
		while (x <= n)
		{
			_putchar(95);
      x++;
		}
	}
	_putchar('\n');
}
