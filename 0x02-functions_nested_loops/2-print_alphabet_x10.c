#include "main.h"
/**
 * print_alphabet_x10 - alphabet x10
*/
void print_alphabet_x10(void)
{
	int letter10;
	char letter;

	letter10 = 0;
	while (letter10 < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)

	_putchar (letter);
	letter10++;
	_putchar ('\n');
	}
}
