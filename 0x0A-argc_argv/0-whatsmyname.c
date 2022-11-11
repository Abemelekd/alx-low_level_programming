#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argc: number of arguments
 * @argv: the string arguments array
 * Return: 0 at the end
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		printf("%s\n", argv[i]);
	}
return (0);
}
