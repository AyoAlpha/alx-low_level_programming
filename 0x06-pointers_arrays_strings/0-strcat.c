#include "main.h"

/**
 * _strcat - function that concatenate two strings
 * @str: string type one
 * @dest: string type two
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; i <= *src; i++)
	{
		dest[*src + 1] = src[i];
	}
	return (dest);
}
