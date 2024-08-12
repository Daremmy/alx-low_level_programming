#include "main.h"

/**
 * print_alphabet_x10 - prints 10 lines of the alphabet in lower case
 *
 * Return: return 0
 */

void print_alphabet_x10(void)
{
	char lalp;
	int l;

	for (l = 1; l <=10; l++)
	{
		for (lalp = 'a'; lalp <= 'z'; lalp++)
			_putchar(lalp);
		_putchar('\n');
	}
}
