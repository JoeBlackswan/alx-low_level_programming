#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @n: number of elements in array
 * @a: array pointer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int c, d temp;

	for (c = 0; c < n - 1; c++)
	{
		for (d = c + 1; d > 0; d--)
		{
			temp = *(a + d);
			*(a + d) = *(a + (d - 1));
			*(a + (d - 1)) = temp;
		}
	}
}
