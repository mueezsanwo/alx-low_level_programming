#include "main.h"
/**
 * _strncpy - copy a string in other string
 * @src: the value to be copied
 * @dest: the destination to paste de value
 * @n: number of character to copy
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (; n > a && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
