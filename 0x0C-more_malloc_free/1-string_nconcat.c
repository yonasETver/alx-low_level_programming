#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string parameter
 * @s2: string parameter
 * @n: int index var
 * Return: pointer char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0, j = 0, m, p, k = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		ar[k++] = s1[p];
	for (m = 0; m < j; m++)
		ar[k++] = s2[m];

	ar[k] = '\0';
	return (ar);
}
