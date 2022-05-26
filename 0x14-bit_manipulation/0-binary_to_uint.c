#include "main.h"

//function declaration
int _strlen(const char *s);


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0, len;

	if (b == NULL)
	{
		return (0);
	}

	len = _strlen(b);

	for (; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}

/**
 * _strlen - function return length of a string
 * @s: string parameter
 * Return: length
*/

int _strlen(const char *s)
{
int i = 0;
while (s[i])
	i++;
	
return (i);
}
