#include "main.h"

/**
 * _strlen - Program that returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
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
 * _strncat - Program to concatenates 2 strings, with at most n bytes from src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Bytes to take from src
 * Return: Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
