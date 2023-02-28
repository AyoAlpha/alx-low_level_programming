#include "main.h"

/**
 * puts_half - Entry point
 * Description: Print the second half of the string
 * @str - Data type
 * Return: string
 */
void puts_half(char *str)
{
	int len = 0;
	int n, i;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		i++;
	}
	n = (len - 1) / 2 + 1;
	for (i =n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
