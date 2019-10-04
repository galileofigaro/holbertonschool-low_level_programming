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
<<<<<<< HEAD
	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)

		dest[count + count2] = src[count2];

=======
	for (count2 = 0; count2 < n && src[count] != '\0'; count2++)
	  {
	    dest[count + count2] = src[count2];
	  }
>>>>>>> 6a50b72369ed0cd60d4b08477ebdf4791781bcdf
	return (dest);
}
