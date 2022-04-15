#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */
int main(void)
{
	int x;
	x = 1;
	while (x <= 100)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
			x++;
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
