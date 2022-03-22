#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


