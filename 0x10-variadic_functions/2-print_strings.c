#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: pointer to a constant separator
 * @n: start of input variables
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strg;

	/* iterate the argument list from the start */
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(ap, char *);
		if (strg)
			printf("%s", strg);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
