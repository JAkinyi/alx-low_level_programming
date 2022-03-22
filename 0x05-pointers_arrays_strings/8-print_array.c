#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int index;
  int j;
  
  j = n -1;

	for (index = 0; index < j; index++)
	{
		printf("%d", a[index]);

		printf(", ");
	}

	printf("\n");
}
