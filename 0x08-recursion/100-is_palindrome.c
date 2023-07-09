#include "main.h"

/**
 * str_lenght - function that returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */

int str_lenght(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_lenght(s + 1));
}

/**
 * comp_str - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: Empty
 */
int comp_str(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp_str(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_str(s, 0, str_lenght(s) - 1));
}
