#include "main.h"

/**
 * swap_int - swaps two integers pointed to by
 * passed variables
 * @a: pointer to variable 1
 * @b: pointer to variable 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
