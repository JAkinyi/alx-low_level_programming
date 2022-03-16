#include "main.h"

/**
 * _isalpha - check for alphabet char
 * @c : Char to check
 * Return: 1 (if alphabet), 0 (otherwise)
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
