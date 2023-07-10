#include <stdlib.h>
#include "main.h"
/**
 * str_concat - A function that concatenates two strings.
 * @s1: string to concatenate.
 * @s2: other string to concatenate.
 * Return: poiner to the new space, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, st1 = 0, st2 = 0;

	while (s1 && s1[st1])
		st1++;
	while (s2 && s2[st2])
		st2++;

	s3 = malloc(sizeof(char) * (st1 + st2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < st1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (st1 + st2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
