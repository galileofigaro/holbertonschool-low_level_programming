#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 *@s1: string one
 *@s2: string two
 *@n: number of bytes
 *Return: null or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, count, size2;
	char *cnct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1]; size1++)
		;
	for (size2 = 0; s2[size2]; size2++)
		;
	if (size2 < n)
		n = size2;

	cnct = malloc(sizeof(char) * (size1 + n + 1));

	if (cnct == NULL)
		return (NULL);

	for (count = 0; count < size1; count++)
		cnct[count] = s1[count];

	for (; count < size1 + n; count++)
		cnct[count] = s2[count - size1];
	cnct[count] = '\0';

	return (cnct);


}
