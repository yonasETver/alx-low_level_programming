#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i = 0;

va_start(list, n);

while (i < n)
{
	printf("%i", va_arg(list, int));
	if (i != n - 1 && separator != NULL)
  {
		printf("%s", separator);
  }
  i++
}
va_end(list);

putchar('\n');
}
