#include "main.h"
/**
 * _strcat - concatenate string
 * @dest: a pointer to string to be concatenated
 * @src: the source string
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
