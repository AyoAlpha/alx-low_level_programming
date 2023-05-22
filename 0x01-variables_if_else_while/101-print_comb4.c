#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y <= 8; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 8 && y != 9 && z != 10)
				{
					putchar(',');
					putchar(' ');
				}
				if (x == 7 && y == 8 && z == 9)
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
