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
	char *result = NULL;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			break;
		}
	}

	return result;
}
