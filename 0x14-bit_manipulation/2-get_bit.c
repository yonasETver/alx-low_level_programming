#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: long int parameter 
 * @index: parameter for index
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_SIZE)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
