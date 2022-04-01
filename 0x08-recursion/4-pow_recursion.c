#include "main.h"

/**
 * _pow_recursion - computes power of an integer to another
 * @x: interger whose power is to be computed
 * @y: integer which x is raised to
 * Return: value of x power y
 *
 * */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
