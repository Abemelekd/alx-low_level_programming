#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string parameter
 * @c: the character to be searched for
 * Return: NULL if there is none, c if found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
		{
		return (s);
		}
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (0);
}
