#include "main.h"

/**
 * _print_rev_recursion - function that print strings in reverse
 * @s: character type
 * Return:void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
