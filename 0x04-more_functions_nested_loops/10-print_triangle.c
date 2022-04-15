#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */


void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	x = 1;
	while (x <= size)
	{
		y = 1;
		while (y <= size)
		{
			if (y <= (size - x))
				_putchar(' ');
			else
				_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}

}
