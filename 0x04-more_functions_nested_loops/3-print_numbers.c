#include "main.h"

/**
 * print_numbers - function that print numbers ranging from 0 - 9
 *
 * Return: Always 0 on success
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
