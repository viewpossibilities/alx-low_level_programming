/**
 * _strlen_recursion - Returns the length of a string.
 * File: 2-strlen_recursion.c
 * @s: The string to be measured.
 * Auth: smone
 * Return: The length of the string.
 */
#include "main.h"

int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
