#include "main.h"

/**
 * times_table - print 9 times table from 0
 *
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (column = 1; column <= 9; column++)
		{
			product = row * column;
			
			putchar(',');
			putchar(' ');

			if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else 
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			_putchar('\n');

		}
	}
}
