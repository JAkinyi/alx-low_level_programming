#include "main.h"

int sqr(int n, int i);

/**
 * _sqrt_recursion - computes squareroot of an integer
 * @n: int whose root is to be computed
 * Return: natural squareroot or -1 where it doesnt exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 1));
}

/**
 * sqr - squares integers beginning from 1 and compares to n
 * @n: number to be compared
 * @i: iterating integers
 * Return: iterator that is equal to the sqrt
 */

int sqr(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (sqr(n, i + 1));
}
