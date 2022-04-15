#include "main.h"

/**
 * print_square -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
    x = 1;
		while (x <= size)
		{
      y = 1;
			while (y <= size)
			{
				_putchar('#');
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
