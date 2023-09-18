#include "main.h"
/**
 * _strncat - pointer to stay next n bytes
 * @dest: first array
 * @src: second array
 * @n: number of bytes
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	while (c <= b)
	{
		if (n > 0)
		{
			dest[a] = src[c];
			a++;
			c++;
			n--;
		}
		else
			break;
	}
	return (dest);
}
