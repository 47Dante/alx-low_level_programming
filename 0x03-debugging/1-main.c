#include <stdio.h>
/**
 * Return: 0
 */
int main(void)
{
	int x;

	printf("infinite loop incoming :(\n");
	x = 0;
	/*
	 * while (x < 0)
	 * {
	 * Infinite loop - No increase of variable
	 * putchar(x);
	 * }
	 */
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
