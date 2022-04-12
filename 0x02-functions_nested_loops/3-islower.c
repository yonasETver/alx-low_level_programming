#include "main.h"

/**
 * _islower - a function that checks a lowercase character
 * @c: a variable that take a single character 
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
