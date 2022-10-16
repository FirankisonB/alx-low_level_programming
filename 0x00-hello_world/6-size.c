#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(a));
	printf("Size of an int: %u byte(s)\n",  sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a lomg long int: %llu byte(s)\n", sizeof(d));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}
