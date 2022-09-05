/**
 * _strcat - function to concatenates two strings
 * @dest: defines the destination string
 * @src: defines the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, z;

	i = 0;
	for (z = 0; dest[z] != '\0'; z++)
		;
	while (src[i] != '\0')
	{
		dest[z + i] = src[i];
		i++;
	}
	return (dest);
}
