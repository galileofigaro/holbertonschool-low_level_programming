#include <stdio.h>

/**
 * main - Print lower and uppercase alphabets
 *
 * Return: zero
 */

int main(void)
{
	char shift1;
	char shift2;

	for (shift1 = 'a' ; shift1 <= 'z' ; shift1++)
	{
		putchar(shift1);
	}

	for (shift2 = 'A' ; shift2 <= 'Z' ; shift2++)
	{
		putchar(shift2);
	}

	putchar('\n');
	return (0);
}
