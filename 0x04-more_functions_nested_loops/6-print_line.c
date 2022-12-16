#include "main.h"
/**
 * print_line - entry point
 * @n: character
 * Return: always 0
 */
void print_line(int n)
{
	if (n > 0)
	{
	while (n)
	{
		_putchar('_');
		n--;
	}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
