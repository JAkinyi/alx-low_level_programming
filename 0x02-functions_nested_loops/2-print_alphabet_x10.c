#include "main.h"

/**
 * print_alphabet - prints a to z
 * in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	char lowercase;
	int x;

	lowercase = 'a';
	x = 0;

	while (x < 10)
	{
		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}
		_putchar('\n');
		x++;
	}

}
