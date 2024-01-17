#include "main.h"


/**
*_abs -  a function that computes the absolute value of an integer
*
* @a: function parameter
* Return: always 0 when sucessful
*/

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}
