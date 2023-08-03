#include "main.h"
/**
 * clear_bit - to sets a value of a bit to a 0
 * @n: pointer set to 1
 * @index: sbit you want to set
 * Return: Always 1 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num1 = 0;

	if (n == NULL)
		return (-1);
	if (index > 31)
		return (-1);
	num1 = 1 << index;
	*n = *n & (~num1);
	return (1);
}
