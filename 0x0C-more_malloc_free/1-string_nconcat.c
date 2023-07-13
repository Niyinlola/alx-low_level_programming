#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes size of strings
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, y, z;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		n = l2;

	str = (char *) malloc((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (y = 0; s1[y] != '\0'; y++)
		str[y] = s1[y];
	for (z = 0; z < n && s2[z] != '\0'; z++)
	{
		str[y] = s2[z];
		y++;
	}
	str[y] = '\0';
	return (str);
}
