/**
 * _puts_recursion - Prints a string, followed by a new line.
 * File: a file
 * Auth: possible
 * @s: The string to be printed.
 * Return: 0
 */
#include "main.h"
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
	_putchar('\n');
}
