#include "holberton.h"

/**
 * _strcmp - compare strings
 *@s1: string one
 *@s2: string two
 * Return: the difference of s1, s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
