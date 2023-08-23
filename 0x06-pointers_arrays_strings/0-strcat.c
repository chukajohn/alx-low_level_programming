#include "main.h"

/**
* _strcat -  a function that concatenates two strings
* @dest: parameter to be concatenate
* @src: parameter to  ne concatenate
* Return: always 0
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int srclent = 0;
	int destlent = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlent++;
	for (i = 0; src[i] != '\0'; i++)
		srclent++;

	for (i = 0; i <= srclent; i++)
		dest[destlent + i] = src[i];
	return (dest);

}
