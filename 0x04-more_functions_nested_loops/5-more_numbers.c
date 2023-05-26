#include "main.h"

/**
 * more_numbers - function that print number 0 to 14 with newline 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar(((x % 10) + '0') ((x / 10) + '0'));
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
