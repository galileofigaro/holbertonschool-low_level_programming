#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *@dest: destination string
 *@src: string to take from
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	while(*dest)
		dest++;

	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
