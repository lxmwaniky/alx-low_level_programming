#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sumA, sumB;

	sumA = 0;
	sumB = 0;

	for (x = 0; x < size; x++)
	{
		sumA += a[(size * x) + x];
		sumB += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sumA, sumB);
}
