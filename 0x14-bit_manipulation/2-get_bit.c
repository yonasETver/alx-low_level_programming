#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: index
 * Return: 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
