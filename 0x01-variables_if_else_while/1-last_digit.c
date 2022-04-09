#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Printresults based on the last digit of n
 * Return: 0
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n;

	if (j > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, j);
	else if (j == 0)
		printf("Last digit of %i is %i and is 0\n", n, j);
	else
		printf("Last digit of %i is %i and is less than 6 andnot 0\n", n, j);

	return (0);
}