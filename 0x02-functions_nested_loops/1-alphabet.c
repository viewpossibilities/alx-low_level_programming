#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * Return : Always 0
 */
void print_alphabet(void)
{
char la = 'a';
while (la <= 'z')
{
	_putchar(la);
	la++;
}
_putchar('\n');
}
