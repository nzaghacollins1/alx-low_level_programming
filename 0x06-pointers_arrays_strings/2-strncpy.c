#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: string to be copied to
 *@src: string to be copied from
 *@n: int input
 *
 *Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		if (j < n)
			dest[j] = src[j];
	while (j < n)
		dest[j++] = '\0';

	return (dest);
}
