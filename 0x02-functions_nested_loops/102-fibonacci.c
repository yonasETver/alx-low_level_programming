#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers starting with 1 and 2.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, k;

	i = 0;
	j = 1;
	count = 0;
	while (count < 50)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
