#include "main.h"
/**
 * _isupper - entry point
 * @c: character to be check
 * Return: 1 if upper and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
