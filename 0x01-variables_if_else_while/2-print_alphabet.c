#include <stdio.h>

/**
 * main - Prints the lowercase alphabet
 *
 * Return: zero
 */

int main(void)
{
	char shift;

	for (shift = 'a' ; shift <= 'z' ; shift++)
	{
		putchar(shift);
	}
	putchar('\n');

	return (0);
}
