#include <stdarg.h>
/**
 * sum_them_all - This function adds all its parameters
 * @n: start of input variables
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int prm, sum = 0;

	/* initialize argument list from the start */
	va_start(ap, n);

	/* iterate all parameter values*/
	for (prm = 0; prm < n; prm++)
		/* get the sum*/
		sum += va_arg(ap, int);
	/*Clean up*/
	va_end(ap);

	return (sum);
}
