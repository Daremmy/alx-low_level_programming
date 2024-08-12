#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: character to be checked
 *
 * Return: if c is lower case return 1, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
