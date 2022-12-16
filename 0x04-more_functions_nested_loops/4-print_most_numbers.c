#include "main.h"
/**
 *  print_most_numbers - entry point
 *  Return: return nothing
 */

void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
	if (c == '2')
	{
		continue;
	}
	if (c == '4')
	{
		continue;
	}
	_putchar(c);
}
_putchar('\n');
}
