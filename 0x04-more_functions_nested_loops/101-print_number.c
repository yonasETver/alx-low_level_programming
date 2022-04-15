#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int x_0, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9;
	int y_0, y_1, y_2, y_3, y_4, y_5, y_6, y_7, y_8;

	x_0 = n / 1000000000; y_0 = x_0; x_1 = (n / 100000000) % 10; y_1 = y_0 + x_1;
	x_2 = (n / 10000000) % 10; y_2 = y_1 + x_2;
	x_3 = (n / 1000000) % 10; y_3 = y_2 + x_3;
	x_4 = (n / 100000) % 10; y_4 = y_3 + x_4;
	x_5 = (n / 10000) % 10; y_5 = y_4 + x_5;
	x_6 = (n / 1000) % 10; y_6 = y_5 + x_6; x_7 = (n / 100) % 10; y_7 = y_6 + x_7;
	x_8 = (n / 10) % 10; y_8 = y_7 + x_8; x_9 = n % 10;
	if (n < 0)
	{
		_putchar('-');
		x_0 *= -1; x_1 *= -1; x_2 *= -1; x_3 *= -1; x_4 *= -1;
		x_5 *= -1; x_6 *= -1; x_7 *= -1; x_8 *= -1; x_9 *= -1;
	}
	if (y_0 != 0)
		_putchar('0' + x_0);
	if (y_1 != 0)
		_putchar('0' + x_1);
	if (y_2 != 0)
		_putchar('0' + x_2);
	if (y_3 != 0)
		_putchar('0' + x_3);
	if (y_4 != 0)
		_putchar('0' + x_4);
	if (y_5 != 0)
		_putchar('0' + x_5);
	if (y_6 != 0)
		_putchar('0' + x_6);
	if (y_7 != 0)
		_putchar('0' + x_7);
	if (y_8 != 0)
		_putchar('0' + x_8);
	_putchar('0' + x_9);
}
