#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
	if (c == 'q')
	{
		continue;
	}
	if (c == 'e')
	{
		continue;
	}
	putchar(c);
}
putchar('\n');
return (0);
}
