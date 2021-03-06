#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n : number to begin with
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("%i\n", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("%i\n", n);
	}
}
