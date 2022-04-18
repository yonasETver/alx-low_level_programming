#include "main.h"

/**
 * swap_int - a function swaps two integers value
 * @x: integer pointer variable 
 * @y: integer pointer variable 
 */
void swap_int(int *x, int *y)
{
	int z;
  
	z = *y;
	*y = *x;
	*x = z;
}
