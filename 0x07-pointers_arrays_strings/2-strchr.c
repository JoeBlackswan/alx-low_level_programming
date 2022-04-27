#include "main.h"

/**
 * *_strchr - Returns a pointer to the first occurrence of the character c
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');

}
