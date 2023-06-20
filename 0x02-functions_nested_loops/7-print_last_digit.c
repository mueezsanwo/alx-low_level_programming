#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *Return: ld and absolute value
*/
int print_last_digit(int printld)
{
	int ld = printld % 10;

	if (ld < 0)
		ld = -ld;
	_putchar (ld + '0');
	return (ld);
}
