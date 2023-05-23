#include <stdio.h>

/**
 * print_alphabet - Entry Point
 *
 * Return: Always 0 on success
 */

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
