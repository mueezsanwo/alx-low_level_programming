#include "main.h"
/**
**_memset - function that fill memory with a constant byte
*@s: pointer name
*@b: variable name
*@n: variable name
*Return: return s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
