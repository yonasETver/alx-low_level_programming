#include <stdio.h>
#include "main.h"

/**
 * print_array - function prints n elements of an array
 * @arr: array refrence
 * @n: number of element of the array
 */
void print_array(int *arr, int n)
{
	int i = 0;

	for (; i < n - 1; i++)
	{
		printf("%d, ", arr[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", arr[n - 1]);
		}
	printf("\n");
}
