#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes used
 * * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, a;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];

	dest[dest_len + a] = '\0';

	return (dest);
}
