#include "main.h"
/**
 * main - entry point
 * Return: Always 0.
 */
int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / 1;
		}
	printf("%lu\n", n);
	return (0);
}
