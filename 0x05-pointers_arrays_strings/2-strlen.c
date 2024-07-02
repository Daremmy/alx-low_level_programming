/**
 * _strlen - returns the lenght of a string
 * @s: variable whose string lenght would be counted
 *
 *Return: String lenght
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] ! = '\0')
	{
		l++;
	}
	return (l);
}
