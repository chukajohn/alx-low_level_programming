#include "main.h"
/**
* positive_or_negative - determine if number is positive, negative or zero
* @i : is the parameter to be checked
* Return: 0 always sucess
*/

void positive_or_negative(int i)
{
	if (i < 0)
	{
	printf("%d is %\n", "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return (0);
}
