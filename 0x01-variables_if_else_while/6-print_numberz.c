#include <stdio.h>

/**
 * main - Entry point
 * Description: use main and putchar
 * print all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
