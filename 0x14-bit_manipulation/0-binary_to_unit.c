#include "main.h"

/**
 * binary_to_uint - a function converts a binary number to unsigned int
 * @b: parameter 
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
  int i = 0;

	if (!b)
  {
		return (0);
  }

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
    i++;
	}
	return (decimal);
}
