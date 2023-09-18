#include "main.h"


/**
* _atoi - convert a string to an integer
* @s: string
*
* Return: 0 if there's no a number into string or number
*/

int _atoi(char *s)
{
	unsigned int i = 0, len = 0;
	int number = 0, sign = 0;

	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			sign += 1;
		else if (s[i] >= '0' && s[i] <= '9')
			number = (number * 10) + (s[i] - '0');
		else if (number > 0)
			break;
	}
	if (sign % 2 != 0)
		number *= -1;
	return (number);
}
