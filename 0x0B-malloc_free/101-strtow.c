#include <stdlib.h>
#include "main.h"
/**
 * wrd_count - helps count the number of words in a string
 * @e: evaluate string
 * Return: counted words
 */
int wrd_count(char *e)
{
	int n, c, w;

	n = 0;
	w = 0;
	for (c = 0; e[c] != '\0'; c++)
	{
		if (e[c] == ' ')
			n = 0;
		else if (n == 0)
		{
			n = 1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - A function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mx, *t;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wrd_count(str);
	if (words == 0)
		return (NULL);

	mx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mx == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				mx[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mx[k] = NULL;

	return (mx);
}
