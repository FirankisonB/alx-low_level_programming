#include "main.h"
#include <stdio.h>

/**
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
