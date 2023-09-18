#include "main.h"
/**
 * _strlen - return the number of a string
 * @s: string
 * Return: number of string (a)
 */
int _strlen(char *s)
{
	int a = 0, b = 1;
	char c = s[0];

	while (c != '\0')
	{
		a++;
		c = s[b++];
	}

	return (a);
}
