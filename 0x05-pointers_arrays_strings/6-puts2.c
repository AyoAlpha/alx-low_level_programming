#include "main.h"

/**
 * puts2 - Entry point
 * Description: Print the character of a string
 * @str: string data type
 * Return: str
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
