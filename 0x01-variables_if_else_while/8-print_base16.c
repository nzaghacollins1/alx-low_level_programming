#include <stdio.h>

/* main - Print all the number of base 10 
 *
 * Return: 0 - program executed successfully
 *
 * */
int main(void)
{
	int num;
	char letters;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);

	putchar('\n');

	return (0);
}
