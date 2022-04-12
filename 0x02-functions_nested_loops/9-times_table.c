#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rows = row, cone = column, dig = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rows, cone, dig;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			dig = (rows * cone);
			if ((dig / 10) > 0)
			{
				_putchar((dig / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dig % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
