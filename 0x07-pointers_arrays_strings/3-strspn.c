#include "main.h"

/**
 * _strspn - gets a pointer to the first occurrence of the character c
 * @s: initial segment
 * @accept: accepted bytes
 * Return: number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (a);

}
