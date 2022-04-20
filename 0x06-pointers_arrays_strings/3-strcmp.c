#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compare two string.
 * @s1: is a pointer string variable
 * @s2: is a pointer string  variable 
 * Return: return a result.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, result;

for (; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
result = (s1[i] - '0') - (s2[i] - '0');

else
{
result = (s1[i] - '0') - (s2[i] - '0');
break;
}
}

return (result);
}
}
