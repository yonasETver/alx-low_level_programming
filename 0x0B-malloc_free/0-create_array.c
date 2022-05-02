#include <stdlib.h>
/**
* *create_array - a function that creates an array of chars
* @size: variable for size
* @c: char variable
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
	return (0);

while (size--)
	m[size] = c;

return (m);
}
