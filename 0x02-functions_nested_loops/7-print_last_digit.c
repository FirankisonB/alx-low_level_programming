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

	r = n % 10;
	if (r < 0)
	{
		_putchar(-r + '0');
		return (-r);
	}
	else
	{
	_putchar(r + '0');
	return (r);
	}
}
