#include "main.h"

/**
 * print_rev - function that print strings in reverse
 * @s: parameter to be used
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int x;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (x = len; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
