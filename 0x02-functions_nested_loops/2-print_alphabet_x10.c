#include "main.h"

/**
 * print_alphabet_x10 - prints a to z
 * in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		char lowercase;

		lowercase = 'a';

		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}
		_putchar('\n');
		x++;
	}

}
