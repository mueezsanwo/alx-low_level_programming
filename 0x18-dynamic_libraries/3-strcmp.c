#include "main.h"
/**
 * _strcmp - compare the character of 2 string
 * @s1: first string
 * @s2: second string
 * Return: value of comparetion s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}
