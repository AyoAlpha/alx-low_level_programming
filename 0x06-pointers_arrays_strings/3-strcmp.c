#include "main.h"

/**
 * _strcmp - Entry point
 * Descripyion: function that compare two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: str1 < str2, negative diffrence of the first unmatched characters
 * If str1 == str2, 0.
 * If str1 > tr2, the positive difference of the first unmatced characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
