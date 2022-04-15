#include "main.h"

/**
 * _isupper -  a function used to checks for uppercase character.
 * @char_one:  variable hold a single character 
 * Return: returns 0.
 */
int _isupper(int char_one)
{

	if (char_one >= 65 && char_one <= 90)
	{
		return (1);
	}
	return (0);
}
