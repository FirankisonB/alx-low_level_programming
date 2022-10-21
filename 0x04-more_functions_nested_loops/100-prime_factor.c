#include <stdio.h>

/**
 * main - finds and print the largest prime factor, of the number 612852475143.
 *
 * Return: Always o
 */
int main(void)
{
	long prime = 50829599, div;

	while (prime < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
			{
				prime /= div;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
