#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @a: integer to swap
 * @b: inyeger to swap
 */
void swap_int(int *a, int *b)
{
	int digit = *a;
	*a = *b;
	*b  = digit;
}
