#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "_putchar", 8);
	putchar('\n');
	return (0);
}
