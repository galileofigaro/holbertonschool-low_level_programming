#include <stdio.h>

/**
 * main - prints all combos of single digits
 *
 * Return: zero
 */

int main(void)
{

	int count;

	for (count = 48; count < 58; count++)
	{
		putchar(count);

	if (count < 57)
	{
		putchar(44);
		putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
