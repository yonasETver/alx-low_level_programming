#include "main.h"

/**
 * check - Checker for the palindrome function
 * @s: String variable
 * @start: int variable
 * @end: int variable
 * @pair: int variable
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}

/**
 * last_index - Returns the last index of a string (counts the null char)
 * @s: Pointer the string
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
