#include "main.h"

/**
 * more_numbers - function that print number 0 to 14 with newline 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int x;
	int y = 0;

	while (y <= 9)
	{
		x = 0;
		while (x <= 14)
		{
			_putchar(x + '0');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
