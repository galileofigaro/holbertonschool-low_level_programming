#include "holberton.h"

/**
 * rev_string - reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int length, count;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (count = 0; count < length - 1; count++)
		end++;

	for (count = 0; count < length / 2; count++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}

}

/**
 * _strlen - string length
 *@s: string
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
