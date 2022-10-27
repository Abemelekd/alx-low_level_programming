#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @destination: final file
 * @source: first file
 * Return: the pointer to destination.
 */
char *_strcat(char *destination, char *source)
{
	int count = 0, count2 = 0;

	while (*(destination + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(destination + count) = *(source + count2);
		if (*(source + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (destination);
}
