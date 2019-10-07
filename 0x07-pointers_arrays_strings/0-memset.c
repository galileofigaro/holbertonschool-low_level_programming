#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 *@s: memory source
 *@b: destination for memory
 *@n: amount of memory being filled
 * Return: pointer to memory of s
 */

char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
