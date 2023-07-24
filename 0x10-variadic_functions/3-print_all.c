#include "variadic_functions.h"
/**
 * print_all - A function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, a, c = 0;
	char *strg;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		a = 0;
		while (t_arg[a])
		{
			if (format[i] == t_arg[a] && c)
			{
				printf(", ");
				break;
			} a++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				strg = va_arg(valist, char *), c = 1;
				if (!strg)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strg);
				break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
