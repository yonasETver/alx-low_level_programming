#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers starting with 1 and 2.
  * Return: Nothing.
  */
int main(void)
{
	int count;
	unsigned long i, j, k;
	unsigned long m, n, o, hold;

	count = 0;
	i = 0;
	j = 1;
	count = 1;
	while (count <= 91)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
		count++;
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		hold = (m + n) / 1000;
		o = (m + n) - hold * 1000;
		k = (i + j) + hold;
		m = n;
		n = o;
		i = j;
		j = k;
		if (o >= 100)
			printf("%lu%lu", k, o);
		else
			printf("%lu0%lu", k, o);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
