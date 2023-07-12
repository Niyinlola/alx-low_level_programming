#include <stdlib.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prexif substring.
 * @s: pointer to string input
 * @accept: string bytes to find
 * Return: pointer to @s, NULL if otherwise
 */
unsigned int _strspn(char *s, char *accept)
{
	int y1, y2, z;

	y1 = 0;
	while (s[y1] != '\0')
	{
		y2 = 0;
		z = 1;
		while (accept[y2] != '\0')
		{
			if (s[y1] == accept[y2])
			{
				z = 0;
				break;
			}
			y2++;
		}
		if (z == 1)
			break;
		y1++;
	}

	return (y1);
}
