#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'Z'; x >== 'A'; --x)
	{
		putchar(toloer(x));
	}
	putchar('\n');

	return (0);
}
