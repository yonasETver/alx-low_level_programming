#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: long int parameter 
 * @index: parameter for index
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
