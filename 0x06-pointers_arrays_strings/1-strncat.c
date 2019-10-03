#include "holberton.h"

/**
 * _strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: number of bytes appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pEnd = dest + _strlen(dest);

	while (*src != '\0' && n--)
		*pEnd++ = *src++;

	*pEnd = '\0';

	return (dest);

}



/**
 * _strlen - returns string length
 *@s: string
 * Return: length
 */

int _strlen(char *s)
{
	int count;

	while (*s++ != '\0')
		count++;

	return (count);
}
