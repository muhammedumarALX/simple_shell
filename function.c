/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 *
 * Return: void
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Desc: copy the string pointed to by the pointer `srcr` to
 * the buffer ponited to by `dest`
 *
 * Return: pointer to `dest`
 */

char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
