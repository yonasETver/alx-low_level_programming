#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function  generates random valid passwords
 */

int main(void)
{
	int n,i = 0, pass_sum = 0;
	int pass_word[100];

	srand(time(NULL));

	while (i < 100)
	{
		pass_word[i] = rand() % 78;
		pass_sum += (pass[i] + '0');
		putchar(pass_word[i] + '0');
		if ((2772 - pass_sum) - '0' < 78)
		{
			n = 2772 - pass_sum - '0';
			pass_sum += n;
			putchar(n + '0');
			break;
		}
		i++;
	}

	return (0);
}
