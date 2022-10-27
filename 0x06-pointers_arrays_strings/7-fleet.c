#include "main.h"

/**
 *leet - encodes a string
 *@a: string to return value
 *
 *Return: @a
 */
char *leet(char *j)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; j[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (j[i] == find[x])
			{
				j[i] = replacer[x / 2];
				x = 9;
			}
		}
	}

	return (j);
}
