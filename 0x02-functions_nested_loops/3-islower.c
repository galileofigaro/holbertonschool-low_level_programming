#include "holberton.h"

/**
 * _islower - check if lowercase
 *
 *@c: char/ascii values of letters
 *
 * Return: 1 for lower case, 0 for upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
