#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a given number
 * @nlastDigit: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nlastDigit)
{
	int print_ld;

	print_ld = (nlastDigit % 10);

	if (print_ld < 0)
	{
		print_ld = (-1 * print_ld);
	}

	_putchar(print_ld + '0');
	return (print_ld);
}
