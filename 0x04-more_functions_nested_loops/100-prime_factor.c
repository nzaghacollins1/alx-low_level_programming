#include <stdio.h>

/**
 *main - prints the largest number of the prime factor
 *Return: 0
 */
int main(void)
{
	long int a, b, pf;

	pf = -1;
	a = 612852475143;

	while (a % 2 == 0)
	{
		pf = 2;
		a = a / 2;
	}
	for (b = 3; b <= a / 2; b = b + 2)
	{
		while (a % b == 0)
		{
			pf = b;
			a = a / b;
		}
	}
	if (a > 2)
		pf = a;

	printf("%ld\n", pf);
	return (0);
}
