#include "main.h"

/**
 * print_most_numbers - function that print 0 to 9 excluding 2 and 4
 *
 * Return: always 0 onn success
 */

void print_most_numbers(void)
{
	int x;

	x = '0';

	while (x <= '9')
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');
}
