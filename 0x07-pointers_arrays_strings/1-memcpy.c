#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: destination of copied bytes
 *@src: the bytes to copy
 *@n: number of bytes to copy
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
