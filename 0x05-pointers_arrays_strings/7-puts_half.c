#include "main.h"

/**
 * puts_half - function that prints half of a string input
 * @str: string pointer variable 
 */
void puts_half(char *str)
{
	int i = 0, j, str_len;

	str_len = 0;

	for (; str[i] != '\0'; i++)
  {
    len++; 
  }

	j = (str_len / 2);

	if ((str_len % 2) == 1)
		n = ((str_len + 1) / 2);

  i = j;
	while (str[i] != '\0')
  {
		_putchar(str[i]);
    i++;
  }
	_putchar('\n');
}
