#include "function_pointers.h"
/**
 * int_index - a function that searches for an interger
 * @array: array to search interger
 * @size: size of an array
 * @cmp: pointer to the comparing function
 * Return: return 0 or -1 or the size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
	{
	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}
	}
return (-1);
}
