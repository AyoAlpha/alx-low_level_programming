#include "main.h"

/**
 * _puts - Entry point
 * Description: function that prints a string, followed by a new line
 * @str: string data type
 * Return: str
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
