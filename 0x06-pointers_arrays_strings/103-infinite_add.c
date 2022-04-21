#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 * @n1: char pointer variable
 * @n2: char pointer variable
 * @r: char pointe variable
 * @size_r: int variable
 * Return: sum of two integers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int count = 0, count2 = 0;

	while (n1[count] != '\0')
		count++;
	while (n2[count2] != '\0')
		count2++;

	*r = *(r + size_r);
	while (n1[count] > 0 || n1[count2] > 0)
	{
		if (n1[count] + n2[count2] > 0)
			*r = n1[count - 1] + n2[count2 - 1] + 1;
		else
			*r = n1[count] + n2[count2];
		count--;
		count2--;
	}
	return (r);
}
