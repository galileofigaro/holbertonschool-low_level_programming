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

	int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);

}
