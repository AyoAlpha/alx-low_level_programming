#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sum multiple argument
 * @n: parameter passed
 * Return: 0 if n is equal 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x = 0;

	va_start (args, n);

	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}
	va_end (args);
	return (x);
}
