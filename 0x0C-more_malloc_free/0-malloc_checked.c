#include "main.h"
/**
 * malloc_check - A pointer to allocated memory
 * @b: variable name
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
