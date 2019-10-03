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

	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';

	return (dest);
}
