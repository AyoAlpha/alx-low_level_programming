#include "main.h"

/**
 * _atoi - Entry point
 * Description: Convert string to integer
 * @s: integer
 * Return: char
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int ans = 0;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		ans = ans * 10 + (*s - '0');
		s++;
	}
	return (sign * ans);
}


