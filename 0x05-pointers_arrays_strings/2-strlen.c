#include "main.h"

/**
 * _strlen - gets length of a string
 * @s: string whose length is to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
