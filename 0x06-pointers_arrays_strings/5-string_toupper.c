#include "main.h"

/**
 * string_toupper - Entry point
 * Description: that changes all lowercase letters of a string to uppercase
 * @str: The strint to be changed
 * Return: String
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
