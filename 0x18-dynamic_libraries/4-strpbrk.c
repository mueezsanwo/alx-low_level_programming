#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s and return
 * @s: string to beeing compared to
 * @accept: string to match with
 * Return: value apart from first match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}
