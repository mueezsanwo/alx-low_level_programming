#include "main.h"
/**
 * flip_bits - to returns the number of bits needed to
 *		flip to get from one number to another
 * @n: num 1 to be compared
 * @m: num 2 to be compared
 * Return: number setted
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, comp = 0, comp1 = 0;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;

		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
