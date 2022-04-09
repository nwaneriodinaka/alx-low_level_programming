#include <stdio.h>
/**
 * main - Entry point
 *
 * Returm: Always 0 (Success)
 */
void lowercaseAlphabets()
{
	int ch;
	for (ch= 'a'; ch<= 'z'; ch++)
		putchar(ch);
	putchar ('\n') ;
}
