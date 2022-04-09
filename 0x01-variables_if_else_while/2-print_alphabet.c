#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Returm: Always 0 (Success)
 */
int main(void)
{
	int x, lower_x;

	for (x = 'A'; x<= 'Z'; x++);
	{
		lower_x = tolower(x);
		putchar(lower_x);
	}
	putchar('\n');
	return (0);
}
