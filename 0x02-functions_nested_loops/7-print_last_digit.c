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

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
