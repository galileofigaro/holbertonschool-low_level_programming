#include "holberton.h"

/**
 * _memcpy - copies memory area
 *@dest: where the memory is copied to
 *@src: where the memory is copied from
 *@n: amount of memory copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
