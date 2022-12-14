#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: arguments entered
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int a, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
		sum *= atoi(argv[a]);
	printf("%d\n", sum);
	return (0);
}
