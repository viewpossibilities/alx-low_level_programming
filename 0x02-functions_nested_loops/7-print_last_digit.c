#include "main.h"
/**
 * print_last_digit - entry
 * @n: the number
 * Return: returnnnn
 */

int print_last_digit(int n)
{
int id = n % 10;
if (id < 0)
	id = id * -1;
_putchar(id);
return (0);
}
