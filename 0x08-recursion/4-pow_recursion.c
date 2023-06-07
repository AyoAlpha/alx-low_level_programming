#include "main.h"

/**
 * _pow_recursion - function that raise an integer to the power of another
 *
 * @x: first integer to be considered
 * @y: second integer to be considered
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
