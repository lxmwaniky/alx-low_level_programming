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
 * Return: sum
 */
int compute(int max)
{
	int i, sum;

	for (i = 0, sum = 0; i < max; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	return (sum);
}
