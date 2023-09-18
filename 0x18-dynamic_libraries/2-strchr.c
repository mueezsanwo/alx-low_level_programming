# include "main.h"
/**
 * _strchr - return pointer to the first occurrence of c character
 * @s: string to evaluate
 * @c: character to found
 * Return: string begining c character
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
