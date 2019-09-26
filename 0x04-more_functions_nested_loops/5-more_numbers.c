#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int lines;
	int count;

	for (lines = 0; lines < 10; lines++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
			{
				_putchar((count / 10) + '0');
			}
			_putchar((count % 10) + '0');
		}
		_putchar('\n');
	}
}
