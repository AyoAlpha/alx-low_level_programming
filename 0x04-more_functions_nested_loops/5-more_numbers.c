#include "main.h"

/**
 * more_numbers - function that print number 0 to 14 with newline 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int x = '0';
	int y;

	while (x <= 14)
	{
		y = 0;
		while (y <= 9)
		{
			_putchar(y);
			y++;
			if (x == 14)
			{
				_putchar('\n');
			}
		}
		_putchar(x);
		x++;
	}
}
