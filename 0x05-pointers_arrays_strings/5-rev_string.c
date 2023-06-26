#include "main.h"
/**
 * rev_string - A  function that reverses a string
 * @s: input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	char str = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++;
	for (y = 0; y < x; y++)
	{
		x--;
		str = s[y];
		s[y] = s[x];
		s[x] = str;
	}
}
