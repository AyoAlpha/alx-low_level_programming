#include "main.h"

/**
 * _pow_recursion - Entry point
 * Description: returns the value raised to the power of y
 * @x: value tmultiply
 * @y: number of times to multiply the value
 *
 * Return: the value multiplied y times
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
	return (x * _pow_recursion(x, y - 1));
}
