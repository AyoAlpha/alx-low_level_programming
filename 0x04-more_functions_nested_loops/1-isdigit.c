#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that print when it's a digit
 * @c: character to be used
 * Return: 1 if it is a digit and 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
