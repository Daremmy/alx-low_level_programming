#include "main.h"

/**
 * print_rev - ptints a string in reverse
 * @s: the string to be printed
 *
 * Return: The reverse of the string
 */

void print_rev(char *s)
{	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
