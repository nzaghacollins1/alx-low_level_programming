#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: holds passed arguments
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int j, k, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (!isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);

			}
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
