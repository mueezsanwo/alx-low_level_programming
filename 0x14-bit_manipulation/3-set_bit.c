#include "main.h"
/**
 * set_bit - to set the value of a bit to 1 at a given index
 * @n: number to set to 1
 * @index: bit you want to set
 * Return: 1 if it works or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int num1 = 0;

	if (n == NULL)
		return (-1);
	if (index > 31)
		return (-1);
	num1 = 1 << index;
	*n = *n | num1;
	return (1);
}
