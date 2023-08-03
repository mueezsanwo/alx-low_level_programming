#include "main.h"
/**
 * print_binary - to print the binary representation of a number int
 * @n: number to convert in binary
 * Return: always 0 (success)
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
