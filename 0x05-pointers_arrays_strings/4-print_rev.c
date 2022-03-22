#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len;
	int i;
	
	len = _strlen(s);

	for (i = len; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


