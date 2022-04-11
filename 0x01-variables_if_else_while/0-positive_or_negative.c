#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * The main method determine if a given rondom number is zero, negative, or posative 
 *
 * Return: 0 on success
 */
int main(void)
{
	int rnum;
	srand(time(0));
	rnum = rand() - RAND_MAX / 2;
	if (rnum < 0)
	{
		printf("%d is %s\n", rnum, "negative number");
	}
	else if (rnum > 0)
	{
		printf("%d is %s\n", rnum, "positive number ");
	}
	else
	{
		printf("%d is %s\n", rnum, "number zero");
	}
	return (0);

}
