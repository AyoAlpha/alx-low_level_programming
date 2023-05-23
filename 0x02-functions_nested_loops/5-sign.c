#include "main.h"
#include <stdio.h>

/**
 * print_sign - print particular sign assign to an integer
 * @n: character to be used
 * Return: 1 when its greater than 0, 0 wheen its equal and -1 when its less 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
