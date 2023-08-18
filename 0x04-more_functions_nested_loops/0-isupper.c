#include "main.h"
/**
*_isupper - a function that checks for uppercase character
* @c: parameter to be used
* Return: always 0 and 1
*/

int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
