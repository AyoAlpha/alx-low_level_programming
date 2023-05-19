#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	int e;
	int q;

	x = 'a';
	e = 'e';
	q = 'q';

	while (x <= 'z')
	{
		if (x != e && x != q)
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
