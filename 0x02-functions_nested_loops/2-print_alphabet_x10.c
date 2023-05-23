#include <stdio.h>

/**
 * print_alphabet_x10 - printing all alphabet 10 times
 *
 * Return: on success
 */

void print_alphabet_x10(void)
{
	int x;
	int y = 0;

	while (y <= 9)
	{
		x = 'a';
		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
		putchar('\n');
		y++;
	}
}
