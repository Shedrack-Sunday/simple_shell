/**
 * _strlen - This function checks the length of a string
 * @s: Pointer to the string s
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
 * *_strcpy -  Copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
