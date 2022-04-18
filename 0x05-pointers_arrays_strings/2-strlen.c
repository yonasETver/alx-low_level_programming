#include "main.h"
/**
* _strlen - a function to count the length
* @s: variable
* Return: return the length to the calling function
*/

int _strlen(char *s)
{
    int i = 1, len_count = 0;
    
    for (char c = s[0];c != '\0'; c = s[i++])
        len_count++;
    return (len_count);
 }
