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

	int count = 0, count2;

	while (dest[count] != '\0')
		count++;
	for (count2 = 0; count2 < n && src[count] != '\0'; count2++)
	  {
	    dest[count + count2] = src[count2];
	  }
	return (dest);
}
