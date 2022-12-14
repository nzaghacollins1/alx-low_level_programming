#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: arguments count
 * @argv: argument string
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
