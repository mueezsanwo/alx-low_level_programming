#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - A function that prints a name
*@name: name to print
*@f: pointer to function print
*Return: always0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
