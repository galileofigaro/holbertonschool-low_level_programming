#include "holberton.h"

/**
 * _isalpha - Checks if alphabet
 * @c: ascii value for a letter
 * Return: one or zero
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
