#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len;
	int i,j;

	j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}

	len = j;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


