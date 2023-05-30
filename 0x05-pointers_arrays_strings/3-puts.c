#include "main.h"

/**
 * _puts - function that print a string followed by anew line
 * @str: data type(string)
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
