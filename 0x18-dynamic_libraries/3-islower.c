#include "main.h"

/**
 * _islower - check c variable
 * @c: random letter
 * Return: (0) if it's wrong
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
