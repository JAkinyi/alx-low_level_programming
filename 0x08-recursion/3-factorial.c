#include "main.h"

/**
 * factorial - compute factorial of a number
 * @n: number whose factorial is to be computed
 * Return: factorial
 *
 * use recursion, no loops
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

