/**
 * _strncat - function to concatenate based on conditional value
 *
 * @dest: destinattion string
 * @src: source string varible
 * @n: conditional variable
 * Return: the string to be returned
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	y = 0;
	for (x = 0; dest[x] != '\0'; x++)
		;

	while (src[y] != '\0' && y < n)
	{
		dest[x + y] = src[y];
		y++;
	}
	return (dest);
}
