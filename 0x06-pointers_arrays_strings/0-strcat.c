#include "main.h"
/**
 * strlen - program t return length string
 *@s: pointer to string to measure
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
      int i;
      int length;

      i = 0;
      length = 0;

      while (*(s + i) != '\0')
	{
		length = length + 1;
		i++;
	}
	return (length);
}

/**
 * _strcat - Program to concatenates 2 strings.
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int lendest;
	int lensrc;
	int lenfdest;
	int i;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	lenfdest = lendest + lensrc;
	i = 0;
	while (lendest <= lenfdest)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
