#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: int parameter
 * @max: int parameter
 * Return: pointer int
 */
int *array_range(int min, int max)
{
	int n, i = 0;
	int *ptr;

	if (min > max)
		return ('\0');

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return ('\0');

	for (; i < n; i++)
		ptr[i] = min + i;

	return (ptr);
}
