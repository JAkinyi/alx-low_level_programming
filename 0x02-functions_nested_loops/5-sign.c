#include "main.h"

/**
 * print_sign - print sign of number
 * return: 1 (if +), 0 (if 0), -1(if -)
 *
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}

	return (sign);
}
