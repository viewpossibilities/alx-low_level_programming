/**
 * _print_rev_recursion - Prints a string in revers
 * File: 1-print_rev_recursion.c
 * Auth: pos
 * _print_rev_recursion - Prints a string in revers
 * @s: The string to be printed.
 * Return: void
 */

#include "main.h"
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
