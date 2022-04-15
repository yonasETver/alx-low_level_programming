#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;
  
  i = 3;
	for (i < 782849)
	{
		while ((n % i == 0) && (n != i))
    {
			n = n / i;
    }
    i = i + 2
	}
	printf("%lu\n", n);
	return (0);
}
