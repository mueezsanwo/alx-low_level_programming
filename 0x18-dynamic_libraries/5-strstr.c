#include "main.h"
/**
 * _strstr - finds the first occurrence of needle in the haystack and return
 * @haystack: first string to be compared with
 * @needle: string to compare
 * Return: marches between the strings
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b;

	while (haystack[a] != '\0')
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] != haystack[a + b])
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
		a++;
	}
	return ('\0');
}
