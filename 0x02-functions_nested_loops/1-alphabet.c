#include "main.h"

/**
 * print_alphabet - prints a to z
 *
 */
void print_alphabet(void)
{
	char lowercase:
	lowercase = 'a';
	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}

	_putchar('\n');
}
