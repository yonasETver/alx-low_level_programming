#include <stdio.h>
/**
  * main - function that sum even fibonacci numbers not exceed 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, k, sum;

	i = sum = 0;
	j = 1;
  count = 0;
	while (count < 50)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
    count++;
	}
	printf("%lu\n", sum);
	return (0);
}
