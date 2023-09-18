# include "main.h"
/**
 * _memcpy - copy src to dest
 * @dest: where copy the src
 * @src: stuff to copy
 * @n: n times to do it
 * Return: dest first value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);
	return (dest);
}
