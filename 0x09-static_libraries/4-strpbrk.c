#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer to input string
 * @accept: pointer to string in @s
 * Return: pointer to @s, NULL if otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int y, z;

	y = 0;
	while (s[y] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[y] == accept[z])
				return (s + y);
			z++;
		}
		y++;
	}
	return ('\0');
}
