#include <stdio.h>

/**
 * main - Entry
 *
 * Remain: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{

		putchar(x);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
