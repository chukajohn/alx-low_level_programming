#include "main.h"

/**
* _isdigit - a function that checks for a digit
* @c: parameter to be checked
* Return: return 1 if c is digit and 0 if is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
