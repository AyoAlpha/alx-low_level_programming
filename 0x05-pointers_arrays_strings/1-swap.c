#include "main.h"

/**
 * swap_int - functions that swap value of two integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
