#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: pointer parameter
  * @size: The size of the array
  * @cmp: a function pointer
  *
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
