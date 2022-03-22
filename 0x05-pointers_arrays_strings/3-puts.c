#include "main.h"

/**
 * _puts-print out a string
 *
 * @str: pointer to string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
