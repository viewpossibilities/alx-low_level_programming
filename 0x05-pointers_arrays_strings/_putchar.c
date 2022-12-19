#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character to stdout
 * @c : the character to print
 * Return: Always 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
