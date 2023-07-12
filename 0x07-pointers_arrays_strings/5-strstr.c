#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: subtring to search for
 * Return: pointer to the beginning of the located substring,
 * NULL if otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p2 != '\0' && *haystack == *p2)
		{
			haystack++;
			p2++;
		}
		if (!*p2)
			return (p1);
		haystack++;
	}
	return ('\0');
}
