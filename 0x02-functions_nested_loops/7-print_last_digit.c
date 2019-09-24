#include "holberton.h"

/**
 *
 *
 *
 */

int print_last_digit(int num)
{
	int last;

	if (num >= 0)
	{
		last = num % 10;
	}
	else
	{
		last = -num % 10;
	}
	_putchar(last + '0');
	return (last);
}
