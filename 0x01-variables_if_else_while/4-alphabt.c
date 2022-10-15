#include <stdio.h>



/**
 *   Return: Always 0.
 *
 */

/* main - prints out lowercase letters except q and e.
 */
int main(void)

{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		if (letter != 'e' && letter != 'q')								putchar(letter);
	}


	putchar('\n');

	return (0);

}
