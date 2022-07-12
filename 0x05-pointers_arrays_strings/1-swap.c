#include "main.h"
/**
 * swap_int - Swaps the values of two intergers
 * @a: An integer to swap
 * @b: Another interger to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
