#include "main.h"
/**
 * _memcpy - copying memory
 * @dest: is destination
 * @src: soursce memory
 * @n: numeber of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);

}
