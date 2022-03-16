#include "main.h"

/**
 * _isalpha - check for alphabet char
 * return: 1 (if alphabet), 0 (otherwise)
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
