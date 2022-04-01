#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: string whose length is to be determined
 * Return: length of string
 *
 * no using loops
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (0);
	else
	{
		count=count + 1 + _strlen_recursion(s + 1);
		return (count);
	}
}
