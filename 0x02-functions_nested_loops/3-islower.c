#include "main.h"
/**
* _islowe - a function that checks lower case characters
*
* Return: Returns 1 if c is lowercase and Returns 0 otherwise
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
