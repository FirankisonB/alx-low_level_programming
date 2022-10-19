#include <limits.h>
#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	n = print_last_digit(INT_MIN);
	_putchar(x + '0');
	return (x);
}
