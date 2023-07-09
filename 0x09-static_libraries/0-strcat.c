#include "main.h"
/**
 * _strcat - Writes a function that concatenates two strings
 * @dest: input pointer to destination
 * @src: input pointer to source
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int a1, a2;

a1 = 0;
while (dest[a1])
	a1++;
for (a2 = 0; src[a2] ; a2++)
	dest[a1++] = src[a2];
return (dest);
}
