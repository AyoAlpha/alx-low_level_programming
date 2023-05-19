#include <stdio.h>

/**
 * main - print all alphabet in lower case
 *
 * Return: Always 0
 */

int main(void)
{
	char x;
	x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
