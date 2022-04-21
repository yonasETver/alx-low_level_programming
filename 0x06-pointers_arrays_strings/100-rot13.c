#include "main.h"

/**
 * rot13 - function that encodes a string using rot13. 
 * @s: a string variable
 * Return: the string cipher 
 */
char *rot13(char *s)
{
	int i, j;

	char eng_alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cor_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; eng_alph[j] != '\0'; j++)
		{
			if (s[i] == eng_alph[j])
			{
				s[i] = cor_rot[j];
				break;
			}
		}
	}
	return (s);
}
