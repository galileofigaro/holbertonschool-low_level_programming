#include "holberton.h"

/**
 * rev_string - reverses a string
 *
 *@s: string to be reversed
 */

void rev_string(char *s)
{

	int length, count;
	char *pStart, *pEnd, ch;

	length = _strlen(s);

	pStart = s;
	pEnd = s;

	for (count = 0; count < length - 1; count++)
		pEnd++;

	for (count = 0; count < length / 2; count++)
	{
		ch = *pEnd;
		*pEnd = *pStart;
		*pStart = ch;

		pStart++;
		pEnd--;
	}
}
