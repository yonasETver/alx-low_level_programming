#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function reverse the content of string array.
 * @a: char variable
 * @n: integer variable
 */
void reverse_array(int *a, int n)
{
int res[100];
int i = 0;
n--;

while (i <= n)
{
  res[i] = a[i];
  i++;
}
  
for (i = 0; i <= n; i++)
a[i] = res[n - i];
}
