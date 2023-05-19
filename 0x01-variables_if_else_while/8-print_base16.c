#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int x = '0';
	int y = 'a';

	while (y <= 'f')
	{
		while (x <= '9')
		{
			putchar(x);
			x++;
		}
	putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}
