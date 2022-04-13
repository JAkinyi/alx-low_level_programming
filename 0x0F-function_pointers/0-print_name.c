#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to a void fn that takes pointer to char as an arg
 * @char: arg of fn pointed to by f
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
