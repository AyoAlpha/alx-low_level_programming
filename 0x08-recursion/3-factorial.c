#include "main.h"

/**
 * factorial - function that print the factorial of any given number
 * @n: integer type
 * Return: -1 if lower than 1 and 1 if it is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
