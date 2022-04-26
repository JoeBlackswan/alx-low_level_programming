#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase
 * @str: pointer
 * Return: string in capital
 */

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] <= 'z' && str[a] >= 'a')
			str[a] -= 32;
	}
	return (str);

}
