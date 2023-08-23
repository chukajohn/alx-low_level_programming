#include "main.h"

/**
* _strncat - a function that concatenates two strings.
* @src: parametre to be concatenated
* @dest: parametere to be concatenated
* @n: parameter to be accessed
* Return: always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lent = strlen(dest);


	for (i = 0; i < n && *src != '\0'; i++)
	{									dest[lent + i] = src[i];
		src++;
	}
	dest[lent + i] =  '\0';
	return (dest);

}
