/**
 * *_memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: constant byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n, ++i)
	{
		s[i] = b;
	}

	ruturn (s);
}