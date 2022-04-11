#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y = 0;

	for (x = '0'; x <= '9'; x++, y++)
	{
		putchar(x);
	if (y < 9)
		{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
