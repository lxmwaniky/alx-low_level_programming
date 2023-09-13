#include <stdio.h>

int compute(int max);

/**
 * main - calls the compute function
 * Return: 0
 */
int main(void)
{
	printf("%u\n", compute(1024));
	return (0);
}

/**
 * compute - compute the sum of all the multiples 3 or 5
 * @max: maximum value
 * Return: total
 */
int compute(int max)
{
	int x, total;

	for (x = 0, total = 0; x < max; x++)
		if ((x % 3 == 0) || (x % 5 == 0))
			total += x;
	return (total);
}
