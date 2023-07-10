#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments
 * @ac: argument counter
 * @av: argument holder
 * Return: pointer to new string, NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int x, y, z, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*finds length of vector + '\0' which makes it a 2d array*/
	length = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}
	str[z] = '\0';

	return (str);
}
