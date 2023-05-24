#include "main.h"


/**
 * _abs - funtion that print the absolute value of an integer
 * @x: character to be considered
 * Return: Always 0 success
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
