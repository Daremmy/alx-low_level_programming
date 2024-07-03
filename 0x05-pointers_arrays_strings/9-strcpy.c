/**
 * *_strcpy - swaps strings from one pointer address to another
 * @dest: String destination
 * @src: String current location
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
