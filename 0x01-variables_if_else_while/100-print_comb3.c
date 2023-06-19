#include <stdio.h>

/**
 * main - Print combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int num1 = '0';
	int num2 = '1';

	while (num1 <= '8')
	{
		while (num2 <= '9')
		{
			if (!(num1 < num2) || num1 == num2)

			{
				putchar(num1);
				putchar(num2);
				if (num1 == '8' && num2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num2 = num1 + '2';
		num1++;
	}
return (0);
}
