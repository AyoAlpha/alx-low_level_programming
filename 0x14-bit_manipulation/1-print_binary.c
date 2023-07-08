#include "main.h"

/**
 * print_binary - function to convert binary to unsigned integer
 * @n: parameter type (int)
 *
 * Return: 0 on success
 */
void print_binary(unsigned long int n)
{
	int i, label = 0;
	unsigned long int x;

	for (i = 63; i >= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
			label++;
		}
		else if (label)
			_putchar('0');
	}
	if (!label)
	{
		_putchar('0');
	}
}
