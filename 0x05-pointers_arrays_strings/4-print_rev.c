#include "main.h"

/**
 * print_rev - ptints a string in reverse
 * @s: the string to be printed
 *
 * Return: The reverse of the string
 */

void print_rev(char *s)
{
	int a,b,c;
	char d;

	a = 0;

	while (s[a] != '\0')
	{
		a++
	}

	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
