#include main.h

/**
 * _strchr - locates a character in a string
 * @s: string to check for character
 * @c: character to locate
 *
 * Return: A pointer to the first occurance of c if present in s, else NULL
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
