#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *@c: character being located
 *@s: string to be searched
 * Return: pointer to first occurance of c, or NULL
 */

char *_strchr(char *s, char c)
{

	while (s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
	return (0);


}
