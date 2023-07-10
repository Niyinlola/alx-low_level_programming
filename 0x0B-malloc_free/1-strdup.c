#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: duplicate the strin
 * Return: pointer to the copied string, NULL if otherwise
 */
char *_strdup(char *str)
{
	char *copi;
	unsigned int y, z;

	y = 0;
	z = 0;

	if (str == NULL)
		return (NULL);
	while (str[z])
		z++;
	copi = malloc(sizeof(char) * (z + 1));
	if (copi == NULL)
		return (NULL);
	while ((copi[y] = str[y]) != '\0')
		y++;
	return (copi);
}
