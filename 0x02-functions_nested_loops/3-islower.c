#include "main.h"
/**
* _islower - a function that checks lower case characters
* @c: parameter to  checked
* Return: Returns 1 if c is lowercase and Returns 0 otherwise
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
