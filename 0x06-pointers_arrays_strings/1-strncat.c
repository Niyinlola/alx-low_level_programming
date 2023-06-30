#include "main.h"
#include <stdio.h>
/**
 *_strncat - writes a function that concatenates two strings
 *@dest: input pointer to destination
 *@src: input pointer to source
 *@n: reads more bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;

a = 0;
while (dest[a])
	a++;
for (b = 0; b < n && src[b] != '\0'; b++)
	dest[a + b] = src[b];
dest[a + b] = '\0';
return (dest);
}
