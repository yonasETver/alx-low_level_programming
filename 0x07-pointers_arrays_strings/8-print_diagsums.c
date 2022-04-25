#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer variable
 * @size: variable for size
 */
void print_diagsums(int *a, int size)
{
	int p, l = 0, r = 0;

	for (int i = 0; i < size; i++)
	{
		p = (i * size) + i;
		l += *(a + p);
	}
	for (int j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
