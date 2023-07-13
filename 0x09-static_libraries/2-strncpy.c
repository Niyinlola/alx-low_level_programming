#include "main.h"
#include <stdio.h>
/**
 * _strncpy - writes a function that copies a string
 * @dest: input pointer to destination
 * @src: input pointer to source
 * @n: reads bytes of source
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0; a < n && src[a] != '\0'; a++)
	dest[a] = src[a];
while (a < n)
{
	dest[a] = '\0';
	a++;
}
return (dest);
}
