#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return: return 0
 */

void print_alphabet(void)
{
	char lalp;

	for (lalp = 'a'; lalp <= 'z'; lalp++)
		_putchar(lalp);

	_putchar('\n');
}
