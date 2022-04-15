include "main.h"

/**
 * print_triangle -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_triangle(int size)
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
				if (y <= size - x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
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
