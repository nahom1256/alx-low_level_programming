#include "main.h"
/**
 * _strncat - concatenates two strings
 * using at most n byts from src
 * @dest: first char
 * @src: second chr
 * @n: no of byte
 *
 * Return : a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
