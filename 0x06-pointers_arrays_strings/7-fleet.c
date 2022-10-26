#include "main.h"

/**
 *leet - encodes a string
 *@a: string to return value
 *
 *Return: @a
 */
char *leet(char *a)
{
	char lt[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};
	int i = 0;
	int j = 0;

	while (a[i] != '\0')
	{
		while (lt[j][0] != '\0')
		{
			if (a[i] == lt[j][0])
				a[i] = lt[j][1];
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
