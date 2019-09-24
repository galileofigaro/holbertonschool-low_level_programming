#include "holberton.h"

/**
 * _abs - absolute value of a number
 *@int: number
 * Return: a
 */

int _abs(int)
{
	int a;

	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a * -1;
		return (a);
	}
}
