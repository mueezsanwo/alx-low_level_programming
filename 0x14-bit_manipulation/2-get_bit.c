#include "main.h"
/**
 * get_bit - to return the calue of a bit of a given index
 * @n: original integer
 * @index: index to calculate the bit
 * Return: the value of the bit at index or 1 if theres an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
