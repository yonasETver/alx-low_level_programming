#include "main.h"

/**
 * largest_number - returns the largest of three integers.
 * @x: first integer numbrr
 * @y: second integer number
 * @z: third integer number
 * Return: largest integer number
 */

int largest_number(int x, int y, int z)
{
	int larges_num;

	if (x >= y && x >= z)
	{
		larges_num = x;
	}
	else if (y >= x && y >= z)
	{
		larges_num = y;
	}
	else
	{
		larges_num = z;
	}

	return (larges_num);
}
