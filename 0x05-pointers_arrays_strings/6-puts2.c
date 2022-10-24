#include "main.h"

/**
 *puts2 - print character of a string, starting with the first
 *@str: string to output
 *
 *Return: 0
 */
void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
		if ((k + 1) % 2)
			_putchar(str[k]);
	_putchar('\n');
}
