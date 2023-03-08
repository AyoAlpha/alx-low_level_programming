#include "main.h"

/**
 * factorial - Entry point
 * Description: returns a factorial
 * @n: factorial
 * Return: Always 0 (success)
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
		return (n * factorial(n - 1));
}
