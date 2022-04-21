#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: the string variable
 * Return: ROT13 cipher
 */
char *rot13(char *s)
{
	int i = 0, j;

	char eng_alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; eng_alph[j] != '\0'; j++)
		{
			if (s[i] == eng_alph[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
