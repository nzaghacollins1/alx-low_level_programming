#include "main.h"

/**
 *string_toupper - lowercase to uppercase
 *@i: string to return
 *
 *Return: uppercase string
 */
char *string_toupper(char *i)
{
	int j;

	j = 0;
	while (i[j] != '\0')
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] -= 32;
		j++;
	}
	i[j] = '\0';

	return (i);
}
