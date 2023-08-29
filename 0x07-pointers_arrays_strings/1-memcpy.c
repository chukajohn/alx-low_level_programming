#include "main.h"

/**
* _memcpy - a function that copies memory area
* @src: source to be copied from
* @dest: a destination for the copied bytes
* @n: number of byutes to be copied
* Return: always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
