#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 0;

	int y = x + 1;

	while (x <= 9)
	{
		while (y <= 9)
		{
			if (!(x > y) || (x == y))
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x == 8 && y == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = 0;
		x++;
		y = x + 1;
	}
	return (0);
}
