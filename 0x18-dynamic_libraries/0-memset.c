# include "main.h"
/**
 * _memset - change value of s pointer n times for b value
 * @s: pointer to change value
 * @b: value for change
 * @n: times of changes
 * Return: original adress of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;
	return (s);
}
