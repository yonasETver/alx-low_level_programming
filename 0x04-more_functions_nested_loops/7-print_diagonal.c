#include "main.h"

/**
 * print_diagonal -  checks for checks for a digit (0 through 9).
 * @n: n -  Variable
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		x = 1;
		while (x <= n)
		{
			y = 1;
			while (y <= n)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
