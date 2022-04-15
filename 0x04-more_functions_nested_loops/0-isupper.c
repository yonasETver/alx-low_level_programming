#include "main.h"

/**
 * _isupper -  function for uppercase character.
 * @c: c -  Variable for a single character 
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
