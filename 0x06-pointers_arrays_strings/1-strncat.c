#include "main.h"
/**
 * *_strncat - oncatenates two strings
 * @dest: first char
 * @src: second chr
 *
 * Return : a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	while (*ptr != '\0'){
		ptr++;
	}
	while (*src != '\0' && n > 0) {
		*ptr = *src;
		 ptr++;
		 src++;
		 n--;
	}
	*ptr = '\0';
	return dest;
}
