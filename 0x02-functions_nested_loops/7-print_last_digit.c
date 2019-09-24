#include "holberton.h"

/**
 * print_last_digit - Prints last digit
 *@num: number
 *Return: last digit
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
	{
		last = 0 - last;
	}
	_putchar(last + '0');
	return (last);
}
