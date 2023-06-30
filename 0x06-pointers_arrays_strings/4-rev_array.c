#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: number of elements of the array
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int tep;
	int i;

	i = 0;
	tep = 0;
	while (i <= n && n > 0)
	{
		tep = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = tep;
		i++;
		n--;
	}
}
