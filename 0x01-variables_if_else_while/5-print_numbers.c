#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: zero
 */

int main(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		printf("%d", count);
	}
	putchar('\n');
	return (0);
}
