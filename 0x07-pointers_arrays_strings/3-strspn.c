#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *@s: string to be searched
 *@accept: string containing characters to match
 * Return: number of bytes in s which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count, length;

	count = 0;
	for (length = 0; s[length] != '\0'; length++)
	{
		if (count != length)
			break;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[length] == accept[i])
			{
				count++;
			}
		}
	}
	return (count);
}
