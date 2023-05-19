#include <stdio.h>

/**
 * main - print all alphabet in lowercase followed by uppercase then newline
 *
 * Return: Always 0
 */
int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';

	while (y <= 'Z')
	{
		while (x <= 'z')
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
