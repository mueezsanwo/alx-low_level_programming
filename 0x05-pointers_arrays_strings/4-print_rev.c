#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int a;
	int b;
	int c;

	a = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		a++;
	}

	for (c = a - 1; c >= 0; c--)
	{
		_putchar (s[c]);
	}
	_putchar('\n');
}
