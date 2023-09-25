#include "main.h"
/** _memcpy() - copies n bytes from memory area src to memory area des
 * @dest: destination
 * @src: source
 * @n: int no of bytes to be copyed
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}


