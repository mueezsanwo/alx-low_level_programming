#include "main.h"
/**
 * binary_to_uint - to convert a binary number to an unsigned int
 * @b: pointer to a srtring of 0 and 1 char
 * Return: number converted or 0 if fails.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number <<= 1;
		number += b[i] - '0';
		i++;
	}
	return (number);
}
